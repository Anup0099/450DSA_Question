class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
    if (n < 2)
    {
        return 0;
    }
    int maxNum = *max_element(nums.begin(), nums.end());
    int minNum = *min_element(nums.begin(), nums.end());
    int gap = (maxNum - minNum) / (n - 1);
    if (gap == 0)
    {
        gap = 1;
    }
    int bucketSize = (maxNum - minNum) / gap + 1;
    vector<int> maxBucket(bucketSize, INT_MIN);
    vector<int> minBucket(bucketSize, INT_MAX);
    for (int i = 0; i < n; i++)
    {
        int bucketIndex = (nums[i] - minNum) / gap;
        maxBucket[bucketIndex] = max(maxBucket[bucketIndex], nums[i]);
        minBucket[bucketIndex] = min(minBucket[bucketIndex], nums[i]);
    }
    int maxGap = INT_MIN;
    int prev = minNum;
    for (int i = 0; i < bucketSize; i++)
    {
        if (minBucket[i] == INT_MAX)
        {
            continue;
        }
        maxGap = max(maxGap, minBucket[i] - prev);
        prev = maxBucket[i];
    }
    return maxGap;
    }
};