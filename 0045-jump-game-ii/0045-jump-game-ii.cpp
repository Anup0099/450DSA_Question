class Solution {
public:
  int solve(int ind, int minJump, vector<int> &nums, vector<int> &dp)
{
    if (ind >= nums.size() - 1)
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
   
    for(int i=1;i<=nums[ind];i++){
        minJump=min(minJump,solve(ind+i,minJump,nums,dp)+1);
    }
    return dp[ind]=minJump;
}
int jump(vector<int> &nums)
{
    vector<int> dp(nums.size(), -1);
    return solve(0,100001, nums, dp);
}
};