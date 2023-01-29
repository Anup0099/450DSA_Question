#include <bits/stdc++.h>
using namespace std;
void solve(int index, vector<int> &nums, int prevIndex, set<vector<int>> &ans, vector<int> &temp)
{
    if (index >= nums.size())
    {
        if (temp.size() >= 2)
        {
            ans.insert(temp);
            return;
        }
    }
    // not pick index case
    solve(index + 1, nums, prevIndex, ans, temp);
    // now the pick we have to check the preIndex if it is smaller than the current index if it is then only we can take that value in vector
    if (prevIndex == -1 || nums[index] >= nums[prevIndex])
    {
        temp.push_back(nums[index]);
        solve(index + 1, nums, prevIndex, ans, temp);
    }
}
vector<vector<int>> findSubsequences(vector<int> &nums)
{
    set<vector<int>> ans;
    vector<int> temp;
    solve(0, nums, -1, ans, temp);
    return vector(ans.begin(), ans.end());
}
int main() {

}