class Solution
{
    public:
        int solve(int ind, vector<int> &nums, int amount, vector<vector< int>> dp)
        {
            if (ind == 0)
            {
                if (amount % nums[0] == 0) return amount / nums[0];
                else return 1e9;
            }
            if (dp[ind][amount] != -1) return dp[ind][amount];
            int notTake = 0 + solve(ind - 1, nums, amount, dp);
            int take = 1e9;
            if (nums[ind] <= amount)
            {

                take = 1 + solve(ind, nums, amount - nums[ind], dp);
                cout << take;
            }

            return dp[ind][amount] = min(take, notTake);
        }
    int coinChange(vector<int> &nums, int amount)
    {
        int n = nums.size();
    vector<vector<int>> dp(n, vector<int>(amount + 1, 0));
    for (int i = 0; i <= amount; i++)
    {
        if (i % nums[0] == 0)
        {
            dp[0][i] = i / nums[0];
        }
        else
        {
            dp[0][i] = 1e9;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            int notTake = 0 + dp[i - 1][j];
            int take = 1e9;
            if (nums[i] <= j)
            {
                take = 1 + dp[i][j - nums[i]];
            }
            dp[i][j] = min(take, notTake);
        }
    }
    int ans = dp[n-1][amount];
    if (ans >= 1e9)
        return -1;
    return ans;
    }
};