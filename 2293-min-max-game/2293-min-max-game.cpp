class Solution {
public:
    int minMaxGame(vector<int>& nums) {
   int n = nums.size();
    if (n == 1)
        return nums[0];
    vector<int> newNUm(n / 2);
    for (int i=0;i<n/2;i++)
    {
        if (i % 2 == 0)
            newNUm[i] = min(nums[2 * i], nums[2 * i + 1]);
        else
            newNUm[i] = max(nums[2 * i], nums[2 * i + 1]);
    }
    int res = minMaxGame(newNUm);
    return res;
    }
};