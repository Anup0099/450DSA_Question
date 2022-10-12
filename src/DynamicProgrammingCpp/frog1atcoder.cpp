#include <bits/stdc++.h>
using namespace std;
int a[10005];

int dp[5];
int n;
int frog(int ind)
{
    if (ind == n-1)
    {
        return 0;
    }
    if (dp[ind] != -1)
        return dp[ind];
    int left = abs(a[ind] - a[ind - 1]) + frog(ind + 1);
    int right = INT_MAX;
    if (ind + 2 < n)
    {
        right = abs(a[ind] - a[ind + 2]) + frog(ind + 2);
    }
    return dp[ind] = min(left, right);
}
 int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]); 
    }
int main()
{

    memset(dp, -1, sizeof(dp));
    cout << frog(0);
}