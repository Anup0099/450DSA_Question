#include <bits/stdc++.h>
using namespace std;
// a greedy solution will not work because of uniformity in data local better choice we may choose an item that will in long term give less value
// express in terms of index
// try all possibilities in every index
// then at last find the maximum of all the prev value
// tabulation method bottom up approach
// steps
// make 2d dp array of size n and weight
// write the all the changing parameters**IMPORTANT
// copy the resucursion
// int the loop traverse the 2d array and write same recursion
int knapsack(vector<int> &wt, vector<int> val, int n, int maxWeight)
{
    vector<vector<int>>dp(n, vector<int>(maxWeight, -1));
    for (int w = wt[0]; w <= maxWeight; w++)
    {
        dp[0][w] = val[0];
    }
    for (int ind = 1; ind < n; ind++)
    {
        for (int w = 0; w <= maxWeight; w++)
        {
            int nottake = 0 + dp[ind - 1][w];
            int take = INT_MIN;
            if (wt[ind <= w])
            {
                take = val[ind] + dp[ind - 1][w - wt[ind]];
            }
             dp[ind][w] = max(take, nottake);
        }
    }
    return dp[n-1][maxWeight];

}
{
}
int main()
{
}