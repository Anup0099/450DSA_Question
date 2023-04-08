class Solution
{
    public:
int vis[1000005];
int maxi = 0;
void dfs(vector<int> &nums, int i, int total)
{
    if (vis[i] == 1)
    {
        maxi = max(maxi, total);
        return;
    }
    vis[i] = 1;
    dfs(nums, nums[i], total + 1);
}
int arrayNesting(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(nums, i, 0);
        }
    }
    return maxi;
}
};