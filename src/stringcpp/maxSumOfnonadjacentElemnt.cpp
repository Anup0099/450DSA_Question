#include <bits/stdc++.h>
using namespace std;
int f(int i, vector<int> &nums, vector<int> &dp)
{
    if (i == 0)
        return nums[i];
    if (i < 0)
        return 0;
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int pick = nums[i] + f(i - 2, nums, dp);
    int notPick = 0 + f(i - 1, nums, dp);
    for (int it=0;it<dp.size()-1;it++)
    {
        cout << dp[it] << endl;
    }
    return dp[i] = max(pick, notPick);
}
int maxNonAdjacent(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);
    // for (int it=0;it<dp.size();it++)
    // {
    //     cout << dp[it] << endl;
    // }
    return f(n - 1, nums, dp);
}
int main()
{
    vector<int> nums = {2, 1, 4, 9};
    int n = nums.size();
    int ans = maxNonAdjacent(nums);
    cout << ans;
}