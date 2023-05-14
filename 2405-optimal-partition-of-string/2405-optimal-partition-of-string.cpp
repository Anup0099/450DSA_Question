class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
    vector<int> lastSeen(26,-1);
    int count = 0;
    int start_current_substring = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (lastSeen[ch - 'a'] >= start_current_substring)
        {
            count++;
            start_current_substring = i;
        
        }
        lastSeen[ch - 'a'] = i;
    }
    return count+1;
    }
};