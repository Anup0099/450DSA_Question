#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &cost, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    int left = solve(ind + 1, cost, dp) + abs(cost[ind] - cost[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
    {
        right = solve(ind + 2, cost, dp) + abs(cost[ind] - cost[ind - 2]);
    }
    return dp[ind] = min(left, right);
}
int minCostClimbingStairs(vector<int> &cost)
{
    vector<int> dp(cost.size() + 1, -1);
    int n = cost.size();
    return solve(n - 1, cost, dp);
}
int main()
{
    vector<int> cost = {10, 15, 20};
    cout << minCostClimbingStairs(cost);
}