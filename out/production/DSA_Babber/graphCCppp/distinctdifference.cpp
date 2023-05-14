#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed array nums of length n.

// The distinct difference array of nums is an array diff of length n such that diff[i] is equal to the number of distinct elements in the suffix nums[i + 1, ..., n - 1] subtracted from the number of distinct elements in the prefix nums[0, ..., i].

// Return the distinct difference array of nums.

// Note that nums[i, ..., j] denotes the subarray of nums starting at index i and ending at index j inclusive. Particularly, if i > j then nums[i, ..., j] denotes an empty subarray.

vector<int> distinctDifferenceArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    cout << n << endl;
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums = {3, 2, 3, 4, 2};
    vector<int> ans = distinctDifferenceArray(nums);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}