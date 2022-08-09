#include <bits/stdc++.h>
using namespace std;
// bool validPartition(vector<int> &nums)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//             if(nums[i]==nums[i+1] || nums[i]==nums[i+1]==nums[i+2] || (nums[i+1]-nums[i]==1 && nums[i+2]-nums[i+1]==1)){
//             return true;
//             break;
//             }
//     }
//     return false;
// }
bool solve(vector<int> &nums, int i, vector<int> &dp)
{
    int n = nums.size();
    if (i == n)
        return true;
    if (dp[i] != -1)
        return dp[i];
    bool res = false;

    if (i + 1 < n && nums[i] == nums[i + 1])
    {
        res = res || solve(nums, i + 2, dp);
        if (i + 2 < n && nums[i] == nums[i + 3])
        {
            res = res || solve(nums, i + 3, dp);
        }
    }
    if (i + 2 < n && nums[i + 1] - nums[i] == 1 && nums[i + 2] - nums[i + 1] == 1)
    {
        res = res || solve(nums, i + 3, dp);
    }
    return dp[i] = res;
}
bool validPartition(vector<int> &nums)
{
    int n = nums.size();
    if (n == 2)
        return nums[0] == nums[1];
    vector<int> dp(n, -1);
    return solve(nums, 0, dp);
}

int main()
{
}