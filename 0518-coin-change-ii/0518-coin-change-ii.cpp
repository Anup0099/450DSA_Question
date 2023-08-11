class Solution {
public:
    int solve(vector<int> &coins, int amount, int ind, vector<vector<int>> &dp)
{
    if(ind==0)
    {
        return (amount%coins[0]==0);
    }
    if(dp[ind][amount]!=-1)return dp[ind][amount];

    int notTaken= solve(coins,amount,ind-1,dp);
    int taken=0;
    if(coins[ind]<=amount)
    {
        taken= solve(coins,amount-coins[ind],ind,dp);
    }
    return dp[ind][amount]=notTaken+taken;
}
int change(int amount, vector<int> &coins)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
    return solve(coins, amount, n-1, dp);
}
};