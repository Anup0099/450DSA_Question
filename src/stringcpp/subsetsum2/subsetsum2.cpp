#include <bits/stdc++.h>
using namespace std;
void findSubset(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> ans)
{
    ans.push_back(ds);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind and nums[i] == nums[i - 1])
        {
            continue;
        }
        ds.push_back(nums[i]);
        findSubset(ind + 1, nums, ds, arr);
        ds.pop_back();
    }
}
vector<vector<int>> subsetWtithDup(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(nums.begin(), nums.end());
    findSubset(0, nums, ds, ans);
    return ans;
}
int main() {}