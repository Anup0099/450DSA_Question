class Solution {
public:
    long long minCost(vector<int>& b1, vector<int>& b2) {
         unordered_map<int, int>c1, c2;
        int minval = b1[0];

        for (int i = 0; i < b1.size(); i++) {
            c1[b1[i]]++;
            minval = min(minval, b1[i]);
            c2[b2[i]]++;
            minval = min(minval, b2[i]);
        }

        vector<int>toSwap;

        for (auto it : c1) {
            int cost = it.first;
            int occ1 = it.second, occ2 = c2[it.first];
            int diff = abs(occ1-occ2);
            if (diff % 2 == 1) {
                return -1;
            }
            diff = diff/2;
            while (diff--)
                toSwap.push_back(cost);
            c1[cost] = 0;
            c2[cost] = 0;
        }

        for (auto it : c2) {
            int cost = it.first;
            int occ1 = c1[it.first], occ2 = it.second;
            int diff = abs(occ1-occ2);
            if (diff % 2 == 1) {
                return -1;
            }
            diff = diff/2;
            while (diff--)
                toSwap.push_back(cost);
            c1[cost] = 0;
            c2[cost] = 0;
        }

        sort(toSwap.begin(), toSwap.end());
        long long ans = 0;
        for (int i = 0; i < toSwap.size()/2; i++) {
            ans += min(2ll*minval, 1ll*toSwap[i]);
        }
        return ans;
    }
};