class Solution {
public:
   void sub(int ind, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds)
{

    if (ind == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[ind]);
    sub(ind + 1, nums, ans, ds);
    ds.pop_back();
    sub(ind + 1, nums, ans, ds);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    int n = nums.size();
    int i = 0;
    vector<int> ds;
    sub(i, nums, ans, ds);
    return ans;
}
};