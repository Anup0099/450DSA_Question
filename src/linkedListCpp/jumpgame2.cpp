#include <bits/stdc++.h>
using namespace std;
// int solve(int ind, int minJump, vector<int> &nums, vector<int> &dp)
// {
//     if (ind >= nums.size() - 1)
//     {
//         return 0;
//     }
//     if (dp[ind] != -1)
//     {
//         return dp[ind];
//     }

//     for (int i = 1; i <= nums[ind]; i++)
//     {
//         minJump = min(minJump, solve(ind + i, nums, dp) + 1);
//     }
//     return dp[ind] = minJump;
// }
// int jump(vector<int> &nums)
// {
//     vector<int> dp(nums.size(), -1);
//     return solve(0, nums, 1000001, dp);
// }
int solveUtil(int ind, vector<int> &height, vector<int> &dp, int k)
{

    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int minSteps = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (ind - j >= 0)
        {
            int jump = solveUtil(ind - j, height, dp, k)
            +abs(height[ind] - height[ind - j]);
            
                cout<<"jump: "<<jump<<endl;




            minSteps = min(jump,minSteps);
        }
    }
    //print the dp array
    // for(int i=0;i<dp.size();i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
    return dp[ind] = minSteps;
}
int solve2(int n, vector<int> &height, int k)
{
    vector<int> dp(n, -1);
    return solveUtil(n - 1, height, dp, k);
}
int main()
{

    vector<int> height{30, 10, 60};
    int n = height.size();
    int k = 2;
    vector<int> dp(n, -1);
    cout << solve2(n, height, k);
}