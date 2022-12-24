#include <bits/stdc++.h>
using namespace std;

int f(int ind, int N, vector<int> &price, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        return N * price[0];
    }
    if (dp[ind][N] != -1)
    {
        return dp[ind][N];
    }
    int notTake = 0 + f(ind - 1, N, price);
    int take = INT_MIN;
    int rodLen = ind + 1;
    if (rodLen <= N)
    {
        take = price[ind] + f(ind, N - rodLen, price);
        // because supply of rod length is infinite
    }
    return dp[ind][N] = max(notTake, take);
}

int cutRod(vector<int> &price, int n)

{
    vector<vector<int>> dp(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        dp[0][n] = n * price[0];
    }
    for (int ind = 1; ind <= n; ind++)
    {
        for (int N = 1; N <= n; N++)
        {
            int notTake = 0 + dp[ind - 1][N];
            int take = INT_MIN;
            int rodLen = ind + 1;
            if (rodLen <= N)
            {
                take = price[ind] + dp[ind][N - rodLen];
            }
            dp[ind][N] = max(notTake, take);
        }
    }
    return dp[n-1][n];
}

int main() {
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    
}