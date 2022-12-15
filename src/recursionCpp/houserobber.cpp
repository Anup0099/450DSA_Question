#include <bits/stdc++.h>
using namespace std;

int solverec(int n, vector<int> &nums, vector<int> &dp)
{
    if (n == 0)
    {
        dp[n] = nums[0];
        return nums[0];
    }
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];

    // we consider and pick the current element
    int pick = nums[n] + solverec(n - 2, nums, dp);

    // we dont pick the current element
    int notpick = 0 + solverec(n - 1, nums, dp);

    dp[n] = max(pick, notpick);
    return dp[n];
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);
    int ans = solverec(n - 1, nums, dp);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << rob(nums);
}