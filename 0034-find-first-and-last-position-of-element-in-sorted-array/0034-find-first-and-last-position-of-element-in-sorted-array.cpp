class Solution {
public:
    int findRightMost(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int right_most = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
        {
            right_most = mid; // one possible answerr
            l = mid + 1;      // look more on the right side
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return right_most;
}
int findleftMost(vector<int> &nums, int target, int n)
{
    int l = 0;
    int r = n - 1;
    int left_most = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target)
        {
            left_most = mid; // possible answer
            r = mid - 1;     // look more on left
        }
        else if (nums[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return left_most;
}
    vector<int> searchRange(vector<int>& nums, int target) {
         int n = nums.size();

    int left = findleftMost(nums, target, n);
    int right = findRightMost(nums, target,  n);
    return {left, right};
    }
};