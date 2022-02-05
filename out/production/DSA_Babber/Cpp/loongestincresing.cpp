#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int dp[2512];
int lis(int i, vector<int> &a)
{
    if (dp[i] != -1)
        return dp[i];
    int ans = 1;
    for (size_t j = 0; j < i; j++)
    {
        /* code */
        if (a[i] > a[j])
        {

            ans = max(ans, lis(j, a) + 1);
        }
    }

    return dp[i] = ans;
}
int lengthOfLIS(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    int ans = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        ans = max(ans, lis(i, nums));
    }
    return ans;
}
int main()
{
    
}