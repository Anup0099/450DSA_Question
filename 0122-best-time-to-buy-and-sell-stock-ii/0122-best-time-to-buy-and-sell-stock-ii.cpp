class Solution {
public:
   int f(int ind, int buy, vector<int> &prices, vector<vector<int>> &dp)
{
     int n = prices.size();
    if (ind == n)
    {
        return 0;
    }
    if (dp[ind][buy] != -1)
    {
        return dp[ind][buy];
    }
    int profit1 = 0, profit2=0;
    if (buy == 1)
    {
        profit1 = f(ind + 1, 0, prices, dp) + prices[ind];
        profit2 = f(ind + 1, 1, prices, dp);
        
    }
    if (buy == 0)
    {
        profit1 = f(ind + 1, 1, prices, dp) - prices[ind];
        profit2 = f(ind + 1, 0, prices, dp);
    }
    return dp[ind][buy] = max(profit1, profit2);
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, -1));
    int ans = f(0, 0, prices, dp);
    return ans;
}
};