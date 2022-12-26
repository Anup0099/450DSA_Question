class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = 0;
    int minDiff = INT16_MAX;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int currSum = nums[i] + nums[j] + nums[k];
            int currDiff = abs(target - currSum);
            if (currDiff < minDiff)
            {
                minDiff = currDiff;
                sum = currSum;
            }
            if (currSum > target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return sum;
    }
};