#include <bits/stdc++.h>
using namespace std;
int knapsackUtil(vector<int> &wy, vector<int> &val, int ind, int W, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        return ((int)(W / wt[0])) * val[0];
    }
    if (dp[ind][W] != -1)
        return dp[ind][W];
    int notTaken = 0 + knapsackUtil(wt, val, ind - 1, W, dp);
    int taken = INT_MIN;
    if (wt[ind] <= W)
    {
        taken = val[ind] + knapsackUtil(wt, val, ind, W - wt[ind], dp);
    }
    return dp[ind][W] = max(notTaken, taken);
}
{
}
int unboundedKnapsack(int n, int W, vector<int> &val, vector<int> &wt)
{
    vector<vector<int>> dp(n, vector<int> & wt);
    return knapsackUtil(wt, val, n - 1, W, dp);
}
int main() {}