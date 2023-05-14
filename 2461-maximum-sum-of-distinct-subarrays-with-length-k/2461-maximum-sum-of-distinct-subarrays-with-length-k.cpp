class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
         // support variables
        int seen[100001] = {}, len = nums.size();
        long long res = 0, tot = 0;
        unordered_set<int> dupes;
        // first k elements
        for (int i = 0, n; i < k; i++) {
            n = nums[i];
            tot += n;
            // recording n as seen and checking for duplicates
            seen[n]++;
            if (seen[n] == 2) dupes.insert(n);
        }
        // checking if the first k are valid and in case updating res
        res = dupes.size() ? 0 : tot;
        // all the others elements
        for (int i = k, j = 0, n, m; i < len; i++, j++) {
            n = nums[i], m = nums[j];
            tot += n - m;
            // recording n as seen and checking for duplicates
            seen[n]++;
            if (seen[n] == 2) dupes.insert(n);
            // removing m as seen and possibly as a duplicate
            seen[m]--;
            if (seen[m] == 1) dupes.erase(m);
            if (!dupes.size()) res = max(res, tot);
        }
        return res;
    }
};