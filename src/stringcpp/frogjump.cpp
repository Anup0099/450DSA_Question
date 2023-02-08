#include <bits/stdc++.h>
using namespace std;

int frogjump(vector<int> nums)
{
    // find the path with minmum energy
    // convert into index
    // do all stuffs in that index
    // take the minimum of them
    int n = nums.size();
    vector<int> dp(n + 1, -1);

    dp[0] = 0;

    int i;
    for (i = 1; i < n; i++)
    {
        int left = dp[i - 1] + abs(nums[i] - nums[i - 1]);
        int right = INT_MAX;
        if (i > 1)
        {
            right = dp[i - 2] + abs(nums[i] - nums[i - 2]);
        }
        dp[i] = min(left, right);
    }
    for (auto it : dp)
    {
        cout << it << " ";
    }
    cout << endl;
    return dp[n - 1];
}

int main()
{
    vector<int> nums = {10, 30, 40, 20};
    cout << frogjump(nums);
}