class Solution {
public:
    bool solve(int ind, vector<int> &nums, vector<int> &dp)
{
    int n = nums.size();
    if (ind >= n)
    {
        return true;
    }
    if(dp[ind]!=-1)return dp[ind];
    bool result = false;
    if (ind+1<n and nums[ind] == nums[ind + 1])
    {
        result |= solve(ind + 2, nums, dp);
    }
    if (result == true)
    {
        return true;
    }
    if (ind+2<n and nums[ind] == nums[ind + 1] and nums[ind + 1] == nums[ind + 2])
    {
        result |= solve(ind + 3, nums, dp);
    }
    if (result == true)
    {
        return true;
    }
    if (ind+2<n and nums[ind + 1] - nums[ind] == 1 and nums[ind + 2] - nums[ind + 1] == 1)
    {
        result |= solve(ind + 3, nums, dp);
    }
    return dp[ind]=result;
}
 bool validPartition(vector<int>& nums) {
         int n = nums.size();
    vector<int> dp(n + 1, -1);
    return solve(0, nums, dp);
    }
};