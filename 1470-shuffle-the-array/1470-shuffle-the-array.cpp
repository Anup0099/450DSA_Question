class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int k) {
        vector<int> ans;
    vector<int> v1;
    vector<int> v2;
    int n = nums.size();
    int mid = n / 2;
    for (int i = 0; i < mid; i++)
    {
        v1.push_back(nums[i]);
    }
    for (int i = mid; i < n; i++)
    {
        v2.push_back(nums[i]);
    }
    for (int i = 0; i < mid; i++)
    {
        ans.push_back(v1[i]);
        ans.push_back(v2[i]);
    }
    return ans;
    }
};