#include <bits/stdc++.h>
using namespace std;
int minStartValue(vector<int> &nums)
{
    int prefix = 0;
    int mini = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        prefix += nums[i];
        mini = min(prefix, mini);
    }
    if (mini < 0)
    {
        return abs(mini) + 1;
    }
    else
    {
        return 1;
    }
}
vector<int> runningSum(vector<int> &nums)
{
    vector<int> running;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            running.push_back(nums[i]);
        }
        else
        {
            running.push_back(running[i - 1] + nums[i]);
        }
    }
    return running;
}
 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums), suf(nums), ans(size(nums));
        partial_sum(begin(pre), end(pre), begin(pre), multiplies<int>());       // calculates & stores prefix product at each index
        partial_sum(rbegin(suf), rend(suf), rbegin(suf), multiplies<int>());    // calculates & stores suffix product at each index
        for(int i = 0; i < size(nums); i++)
            ans[i] = (i ? pre[i-1] : 1) * (i+1 < size(nums) ? suf[i+1] : 1);
        return ans;   
    }
int main()
{
    vector<int> nums = {-3, 2, -3, 4, 2};
    cout << minStartValue(nums);
}