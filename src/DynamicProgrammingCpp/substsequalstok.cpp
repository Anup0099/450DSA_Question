#include <bits/stdc++.h>
using namespace std;
int f(int ind, vector<int> &num, int sum,vector<vector<int>>&dp)
{
    if (sum == 0)
        return 1;
    if (ind == 0)
        return num[0] == sum;
    if (dp[ind][sum] != -1)
        return dp[ind][sum];
    int notTake = f(ind - 1, num, sum,dp);
    int take = 0;
    if (num[ind] <= sum)
    {
        f(ind - 1, num, sum - num[ind],dp);
    }
    return dp[ind][sum]= take + notTake;
}
int findWays(vector<int> &num, int taregt)
{
    int n = num.size();
    vector<vector<int>>dp(n + 1, vector<int>(taregt + 1, -1));
    return f(n - 1, num, taregt,dp);
}
int main()
{   

    vector<int> num = {1, 2, 2, 3};
    int target = 4;
    cout << findWays(num, target);
}