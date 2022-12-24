class Solution {
public:
   int dp[21][2001];
int f(int ind, int target, vector<int> &nums, int sum)
{
    if (ind == nums.size())
    {
        if (target == sum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (sum < 0)
    {
        if (dp[ind][sum + 2001] != -1)
        {
            return dp[ind][sum + 2001];
        }
    }
    else if (sum >= 0)
    {
        if (dp[ind][sum] != -1)
        {
            return dp[ind][sum];
        }
    }

    int notTake = f(ind + 1, target, nums, sum - nums[ind]);
    int take = f(ind + 1, target, nums, sum + nums[ind]);
    return (sum < 0) ? dp[ind][sum + 2001] = notTake + take : dp[ind][sum] = notTake + take;
}
int findTargetSumWays(vector<int> &nums, int target)
{
    int n = nums.size();
    memset(dp, -1, sizeof(dp));
    return f(0, target, nums, 0);
}
};