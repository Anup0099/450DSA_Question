#include <bits/stdc++.h>
using namespace std;
// longest increasing subsequence
int solve(vector<int> &nums, int n, int index, int prevIndex, vector<vector<int>> &dp)
{

    if (index == nums.size())
    {
        return 0;
    }
    if (dp[index][prevIndex] != -1)
    {
        return dp[index][prevIndex];
    }
    int notTake = 0 + solve(nums, n, index + 1, prevIndex, dp);
    int take = 0;
    if (prevIndex == -1 || nums[index] > nums[prevIndex])
    {
        take = 1 + solve(nums, n, index + 1, ind, dp);
    }
    retuen dp[index][prevIndex + 1] = max(take, notTake);

    // tabulation approach
    // same ateps for tabulation  now the base case is (ind==n),we return 0 we can initialize the entire dp array 0,we need to write the base case explicitly
    // the changing parameteres are index and prev index
    // we will use aloop from n-1 to 0
    // the second paramater is always smaller than the first parameter

    vector<vector<int>> dp(vector<int>(n + 1, 0));
    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int prev = ind - 1; prev >= -1; prev--)
        {
            int notake = 0 + dp[ind + 1][prevIndex + 1];
            int take = 0;
            if (prevIndex == -1 || arr[ind] > arr[prevIndex])
            {
                take = 1 + dp[ind + 1][ind + 1];
            }
            dp[ind][prevIndex] = max(take, notTake);
        }
    }
    return dp[0][0];

    // most optmized approach
    // binary search
}
int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<in t>> dp(n, vector<int>(n + 1, -1));
    return solve(nums, 0, -1, dp);
}

int main() {}