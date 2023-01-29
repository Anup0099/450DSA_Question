class Solution {
public:
   int nways(int i, string s,vector<int>&dp)
{
    if (i == s.size())
        return 1;
    if (s[i] == '0')
        return 0;
    if (dp[i] != -1){
        return dp[i];
    }
    int ans = nways(i + 1, s,dp);
    if (i < s.size() - 1 && (s[i] == '1' || (s[i] == '2' && s[i + 1] < '7')))
        ans +=  nways(i + 2, s,dp);
    return  dp[i] = ans;
}
int numDecodings(string s)
{
    vector<int> dp(s.size() + 1, -1);
    return nways(0, s,dp);
}
};