#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int lis(int ind, vector<int> &nums, vector<int> &dp)
{
    if (ind == 0)
        return nums[ind];
    if (ind < 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int pick = nums[ind] + lis(ind - 2, nums, dp);
    int notPick = 0 + lis(ind - 1, nums, dp);

    return dp[ind] = max(pick, notPick);
}

int robs(vector<int> &nums)
{
    int n = nums.size();
    vector<int>temp1,temp2;
    if (int i = 0; i < n; i++)
    {
        if(i!=0) temp1.push_back(robs(i));
        if(i!=n-1)temp2.push_back(robs(i));
    }
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    //  vector<int>dp(n,-1);
    int prev1 = nums[0];
    int prev2 = 0;
    for (size_t i = 1; i < n; i++)
    {
        /* code */
        int take = nums[i];
        if (i > 1)
            take += prev2;
        int notTake = 0 + prev1;
        int curi = max(take, notTake);
        prev2 = prev1;
        prev1 = curi;
    }
    return prev1;
    // return lis(n-1,nums);
}
int main()
{
}