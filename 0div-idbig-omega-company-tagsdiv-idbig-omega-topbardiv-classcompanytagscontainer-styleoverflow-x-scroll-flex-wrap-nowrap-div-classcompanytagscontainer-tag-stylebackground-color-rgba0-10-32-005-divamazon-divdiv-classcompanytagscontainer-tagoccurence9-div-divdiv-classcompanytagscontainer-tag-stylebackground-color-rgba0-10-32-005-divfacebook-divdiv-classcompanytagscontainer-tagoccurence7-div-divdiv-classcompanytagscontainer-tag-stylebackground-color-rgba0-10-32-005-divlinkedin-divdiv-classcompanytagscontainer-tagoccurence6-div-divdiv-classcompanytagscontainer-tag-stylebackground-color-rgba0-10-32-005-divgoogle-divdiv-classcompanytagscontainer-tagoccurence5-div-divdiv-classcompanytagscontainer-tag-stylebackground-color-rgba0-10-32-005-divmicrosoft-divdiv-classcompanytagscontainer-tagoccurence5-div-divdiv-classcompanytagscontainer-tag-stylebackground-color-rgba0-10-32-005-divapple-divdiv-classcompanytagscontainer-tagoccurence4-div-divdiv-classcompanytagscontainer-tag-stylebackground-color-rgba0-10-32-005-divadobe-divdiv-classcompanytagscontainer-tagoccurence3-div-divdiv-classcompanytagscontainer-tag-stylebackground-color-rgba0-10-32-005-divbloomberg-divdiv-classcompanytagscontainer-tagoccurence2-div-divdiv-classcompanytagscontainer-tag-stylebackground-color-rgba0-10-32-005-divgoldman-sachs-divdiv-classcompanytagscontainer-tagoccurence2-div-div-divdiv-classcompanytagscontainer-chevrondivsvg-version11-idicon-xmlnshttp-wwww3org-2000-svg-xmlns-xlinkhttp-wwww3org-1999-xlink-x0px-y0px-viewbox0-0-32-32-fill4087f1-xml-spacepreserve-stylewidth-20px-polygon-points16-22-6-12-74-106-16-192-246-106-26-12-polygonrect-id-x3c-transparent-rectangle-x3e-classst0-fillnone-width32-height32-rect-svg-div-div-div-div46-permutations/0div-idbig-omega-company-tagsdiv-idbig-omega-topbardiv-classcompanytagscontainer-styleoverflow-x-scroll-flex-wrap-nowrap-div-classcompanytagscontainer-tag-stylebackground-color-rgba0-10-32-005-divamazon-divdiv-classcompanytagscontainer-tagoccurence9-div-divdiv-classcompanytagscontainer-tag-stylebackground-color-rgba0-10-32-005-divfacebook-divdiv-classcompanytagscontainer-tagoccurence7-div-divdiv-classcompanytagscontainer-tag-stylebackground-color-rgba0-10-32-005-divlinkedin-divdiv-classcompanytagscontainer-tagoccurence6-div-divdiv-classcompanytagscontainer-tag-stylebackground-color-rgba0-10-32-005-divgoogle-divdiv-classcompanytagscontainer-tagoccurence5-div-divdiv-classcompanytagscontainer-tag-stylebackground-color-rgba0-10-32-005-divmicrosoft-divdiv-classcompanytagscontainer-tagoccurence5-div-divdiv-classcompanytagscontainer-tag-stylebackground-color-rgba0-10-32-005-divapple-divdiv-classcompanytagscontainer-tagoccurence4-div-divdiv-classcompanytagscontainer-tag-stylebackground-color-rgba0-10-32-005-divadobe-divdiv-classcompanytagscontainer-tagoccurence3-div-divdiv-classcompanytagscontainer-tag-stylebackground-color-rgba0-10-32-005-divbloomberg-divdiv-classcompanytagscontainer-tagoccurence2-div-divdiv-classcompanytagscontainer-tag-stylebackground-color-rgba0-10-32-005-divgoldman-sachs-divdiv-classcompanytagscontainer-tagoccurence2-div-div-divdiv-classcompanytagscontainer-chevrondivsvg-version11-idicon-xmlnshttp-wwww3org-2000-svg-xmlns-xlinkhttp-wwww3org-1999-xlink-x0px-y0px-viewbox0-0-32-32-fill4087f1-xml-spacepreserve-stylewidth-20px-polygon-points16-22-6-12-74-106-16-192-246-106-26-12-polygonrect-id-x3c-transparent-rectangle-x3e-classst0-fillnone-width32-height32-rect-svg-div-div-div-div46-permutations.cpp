class Solution {
public:
    void solve(vector<int> &arr, int ind, vector<vector<int>> &ans)
{
    if (ind == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        swap(arr[ind], arr[i]);

        solve(arr, ind + 1, ans);
        swap(arr[ind], arr[i]);
    }
}
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;

    int n = arr.size();
    solve(arr, 0, ans);
    return ans;
    }
};