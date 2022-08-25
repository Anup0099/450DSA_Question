#include <bits/stdc++.h>
using namespace std;

int solvedutil(int ind, vector<int> &arr, vector<int> &dp)
{
    if (dp[ind] != -1)
        return dp[ind];
    if (dp[ind] == 0)
        return arr[ind];
    if (ind < 0)
        return 0;

    int pick = arr[ind] + solvedutil(ind - 2, arr, dp);
    int notpick = 0 + solvedutil(ind - 1, arr, dp);
    dp[ind] = max(pick, notpick);
    return dp[ind];
}
int solve(int n, vector<int> &arr)
{
    vector<int> dp(n, -1);
    return solvedutil(n - 1, arr, dp);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(n, arr) << endl;
    return 0;
}