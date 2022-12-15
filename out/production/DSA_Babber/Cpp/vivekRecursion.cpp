#include <bits/stdc++.h>
using namespace std;
int n;
int rec(int level)
{
    // for (all choices)
    // {
    //     if (check(valid choice))
    //     {
    //         move(choice)
    //     }
    // }
    if (level > n)
        return 0;
    if (level == n)
    {
        // print
        return 1;
    }
    // loop over the choices
    int ans = 0;
    for (int step = 1; step <= 3; step++)
    {
        if (level + step <= n)
        {

            int ways = rec(level + step);
            ans += ways;
        }
    }
    return ans;
}
int f(int ind, vector<int> &dp)
{
    if (ind == n - 1)
    {
        return dp[ind] = 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int left = INT_MAX;
    int right = INT_MAX;
    left = abs(a[ind] - a[ind - 1]) + f(ind - 1, dp);
    if (ind + 2 < n)
    {
        right = abs(a[ind] - a[ind + 2]) + f(ind + 2, dp);
    }
    return dp[ind] = min(left, right, dp);
}
int f2(int ind){
    if(ind == n-1){
        return dp[ind]=0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int cost= INT_MAX;
    for(int i=ind;i<min(n-1,ind+k);i++){
        cost = min(cost,abs(a[i]-a[ind]+f[i]));
    }
    return dp[ind]=cost;
}
void solve()
{
    int n;
    cin >> n;
    cout << rec(1) << endl;
}
int main()
{
    solve();
    return 0;
}