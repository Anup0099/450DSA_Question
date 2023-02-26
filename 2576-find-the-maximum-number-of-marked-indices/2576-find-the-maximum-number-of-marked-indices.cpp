class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
         int n = nums.size();
    sort(begin(nums), end(nums));
    int ans = 0;
    for (int i = (n + 1) / 2; i < n; i++)
    {
        if (nums[ans]*2<=nums[i])
            ans++;
    }

    return ans * 2;
    }
};