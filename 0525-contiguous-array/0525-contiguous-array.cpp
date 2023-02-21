class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
    int res = 0;
    unordered_map<int, int> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            nums[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            res = max(res, i+1);
        }
        if (m.find(sum) != m.end())
        {
            res = max(res, i - m[sum]);
        }
        else
        {
            m[sum] = i;
        }
    }
    return res;
    }
};