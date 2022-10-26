class Solution {
public:
    int findMaxK(vector<int>& nums) {
         int n = nums.size();
    int max = *max_element(nums.begin(), nums.end());
    int min = *min_element(nums.begin(), nums.end());
    if (min > 0)
    {
        return -1;
    }
    int k = max;
    while (k > 0)
    {
        if (find(nums.begin(), nums.end(), k) != nums.end() && find(nums.begin(), nums.end(), -k) != nums.end())
        {
            return k;
        }
        k--;
    }
    return -1;
    }
};