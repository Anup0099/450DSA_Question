#include <bits/stdc++.h>
using namespace std;
// here are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.

// The capability of the robber is the maximum amount of money he steals from one house of all the houses he robbed.

// You are given an integer array nums representing how much money is stashed in each house. More formally, the ith house from the left has nums[i] dollars.

// You are also given an integer k, representing the minimum number of houses the robber will steal from. It is always possible to steal at least k houses.

// Return the minimum capability of the robber out of all the possible ways to steal at least k houses.
int minCapability(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] + nums[i - 1];
    }
    int ans = INT_MAX;
    for (int i = k; i <= n; i++)
    {
        ans = min(ans, dp[i] - dp[i - k]);
    }
    return ans;
}
int main()
{
}