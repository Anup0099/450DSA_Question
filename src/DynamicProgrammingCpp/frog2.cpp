 #include <bits/stdc++.h>
using namespace std;
int a[10005];

int dp[5];
int n;
int k;
int frog(int ind)
{
    if (ind == n - 1)
    {
        return 0;
    }
    if (dp[ind] != -1)
        return dp[ind];
    int cost = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        if (ind + i < n)
        {
            cost = min(cost, abs(a[ind] - a[ind + i]) + frog(ind + i));
        }
    }
    return dp[ind] =cost;
}
void solve()
{
    //   base case
}
int main()
{

    memset(dp, -1, sizeof(dp));
    cout << frog(0);
}