class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int sol = 0;
        unordered_map<int,int> mp;
        for(int i : tasks) mp[i]++;

        for(auto p : mp)
        {
            if(p.second < 2) return -1;
            sol += ceil(p.second/3.0);
        }

        return sol;

    }
};