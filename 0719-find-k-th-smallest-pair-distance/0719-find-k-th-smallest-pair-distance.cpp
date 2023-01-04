class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
    int low = 0, high = nums[nums.size() - 1] - nums[0];
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int count = 0, left = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            while (nums[right] - nums[left] > mid)
            {
                left++;
            }
            count += right - left;
        }
        if (count < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
    }
};