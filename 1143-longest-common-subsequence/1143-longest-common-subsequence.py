class Solution {
public:
   
         int pre(int n,int m,string &s1,string &s2,vector<vector<int>> &dp){
                if(n < 0 or m < 0) return 0;
                if(dp[n][m]!=-1) return dp[n][m];
                if(s1[n] == s2[m]) return dp[n][m] = pre(n-1,m-1,s1,s2,dp) + 1;
                else return dp[n][m] = max(pre(n-1,m,s1,s2,dp),pre(n,m-1,s1,s2,dp));
            }
            int longestCommonSubsequence(string text1, string text2) {
                int n = text1.size();
                int m = text2.size();
                vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
                pre(n,m,text1,text2,dp);
                return dp[n-1][m-1];
            }
    
};