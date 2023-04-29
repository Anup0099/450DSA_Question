class Solution {
public:
    bool f(string &str, unordered_map<int, vector<string>> &s, int k, vector<int> &dp){
        if(k>=str.size()) return k==str.size();
        
        if(dp[k]!=-1) return dp[k];
        bool inc = false;
        
        for(int i=0; i<s[str[k]-'a'].size(); i++){
            int sz = s[str[k]-'a'][i].size();
                string sub = str.substr(k, sz);
                if(sub == s[str[k]-'a'][i]){
                     inc = inc || f(str, s, k+sz, dp);
                }
        }
        
        return dp[k]=inc;
    }
    
    
    bool wordBreak(string str, vector<string>& w) {
        unordered_map<int, vector<string>> s;
        vector<int> dp(str.size(), -1);
        
        for(int i=0; i<w.size(); i++){
            s[w[i][0]-'a'].push_back(w[i]);
        }
        
        return f(str, s, 0, dp);
    }
};