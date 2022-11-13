class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int lcm = nums[i];
        if (lcm == k)
            count++;
        for (int j = i + 1; j < n; j++)
        {
            lcm = (lcm * nums[j]) / __gcd(lcm, nums[j]);
            if (lcm == k)
                count++;
            if (lcm > k)
                break;
        }
    }
    return count;
    }
};