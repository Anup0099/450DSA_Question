class Solution {
public:
    int totalFruit(vector<int>& tree) {
         int i = 0, j = 0;
    int ans = 0;
    int count = 0;
    unordered_map<int, int> mp;
    while (j < tree.size())
    {
        mp[tree[j]]++;
        if (mp[tree[j]] == 1)
        {
            count++;
        }
        if (count > 2)
        {
            while (mp[tree[i]] > 1)
            {
                mp[tree[i]]--;
                i++;
            }
            mp[tree[i]]--;
            i++;
            count--;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
    }
};