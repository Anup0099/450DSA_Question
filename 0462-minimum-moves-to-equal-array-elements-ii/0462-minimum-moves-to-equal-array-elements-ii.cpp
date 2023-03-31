class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(), nums.end());
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int count = 0;
    while (start < end)
    {
        count += nums[end] - nums[start];
        start++;
        end--;
    }
    return count;
    }
};