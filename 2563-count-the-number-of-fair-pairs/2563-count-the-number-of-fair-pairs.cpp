class Solution {
public:
   long long countFairPairs(vector<int> &nums, int first_val, int last_val)
{

    sort(nums.begin(), nums.end());
    long long count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int target1 = first_val - nums[i];
        int target2 = last_val - nums[i];
        int left = i + 1;
        int right = nums.size() - 1;
        // finding the target
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target1)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
          int leftbound = right;
        // leftbound is the lower bound for achieving the target
        right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target2)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        int rightbound = left - 1;
        count += rightbound - leftbound;
    }
    return count;
}
};