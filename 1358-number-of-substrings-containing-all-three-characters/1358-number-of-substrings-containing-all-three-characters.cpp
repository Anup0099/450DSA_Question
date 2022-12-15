class Solution {
public:
    int numberOfSubstrings(string s) {
     int n = s.size();
    int ans = 0;
    unordered_map<char, int> mp;
    int i = 0, j = 0;
    while (j < n)
    {
        mp[s[j]]++;
        while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0)
        {
            ans += n - j;
            mp[s[i]]--;
            i++;
        }
        j++;
    }
    return ans;
    
    }
};