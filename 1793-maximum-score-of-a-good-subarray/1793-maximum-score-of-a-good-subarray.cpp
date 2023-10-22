class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
         int i = k, j = k;
    int result = nums[k], currentMin = nums[k];
    int n = nums.size();
    int left = 0, right = 0;
    while (i > 0 || j < n - 1)
    {
        left = (i > 0) ? nums[i-1] : 0;
        right = (j < n - 1) ? nums[j+1] : 0;
        if (left > right)
        {
            currentMin = min(currentMin, left);
            i--;
        }
        else
        {
            currentMin = min(currentMin, right);
            j++;
        }
        result = max(result, currentMin * (j - i + 1));
    }
    return result;
    }
};