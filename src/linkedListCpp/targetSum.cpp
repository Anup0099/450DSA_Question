#include <bits/stdc++.h>
using namespace std;

// memoization
long f(int ind, int T, int *a, vector<vector<long>> &dp)
{
    if (ind == 0)
    {
        return (T % a[0] == 0);
    }
    if (dp[ind][T] != 0)
    {
        return dp[ind][T];
    }
    long notTake = f(ind - 1, T, a, dp);
    long take = 0;
    if (T >= a[ind])
    {
        take = f(ind, T - a[ind], a, dp);
    }
    return dp[ind][T] = take + notTake;
}
// top down tabulation
long counWays(int *denomination, int n, int value)
{
    vector<vector<long>> dp(n + 1, vector<long>(value + 1, 0));
    for (int i = 0; i <= value; i++)
    {
        dp[0][i]=(i%denomination[0]==0));
    }
    for (int ind = 1; ind < n; ind++)
    {
        for (int T = 0; T <= value; T++)
        {
            long notTake = dp[ind - 1][T];
            long take = 0;
            if (T >= denomination[ind])
            {
                take = dp[ind][T - denomination[ind]];
            }
            dp[ind][T] = take + notTake;
        }
    }
    return f(n - 1, value, denomination, dp);
}
// sapce optimized solution
long counWays(int *denomination, int n, int value)
{
    vector<vector<long>> dp(n + 1, vector<long>(value + 1, 0));
    vector<int> prev(value + 1, 0), cur(value + 1, 0);
    for (int i = 0; i <= value; i++)
    {
        prev[i]=(i%denomination[0]==0));
    }
    for (int ind = 1; ind < n; ind++)
    {
        for (int T = 0; T <= value; T++)
        {
            long notTake = prev[T];
            long take = 0;
            if (T >= denomination[ind])
            {
                take = cur[T - denomination[ind]];
            }
            cur[T] = take + notTake;
        }
        prev = cur;
    }
    return prev[value];
}
int change(int amount, vector<int> &coins)
{    vector<int> dp(amount+1,0);
    dp[0]=1;
    for(int i=0;i<coins.size();i++){
        for(int j=coins[i];j<=amount;j++){
            dp[j]+=dp[j-coins[i]];
        }
    }
    return dp[amount];
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int value;
    cin >> value;
    cout << counWays(a, n, value) << endl;
}