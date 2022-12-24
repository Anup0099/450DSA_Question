class Solution {
public:
  int f(int ind, int buy, vector<int> &prices, vector<vector<int>> &dp)
{
    if (ind >= prices.size())
    {
        return 0;
    }
    if (dp[ind][buy] != -1)
    {
        return dp[ind][buy];
    }
    int profit;
    if (buy == 0)
    {
        profit = max(f(ind + 1, 0, prices, dp), f(ind + 1, 1, prices, dp) - prices[ind]);
    }
    if (buy == 1)
    {
        profit = max(f(ind + 1, 1, prices, dp), f(ind + 2, 0, prices, dp) + prices[ind]);
    }
    return dp[ind][buy] = profit;
}
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<vector<int>> dp(prices.size() + 1, vector<int>(2, -1));
    int ans = f(0, 0, prices, dp);
    return ans;
}};