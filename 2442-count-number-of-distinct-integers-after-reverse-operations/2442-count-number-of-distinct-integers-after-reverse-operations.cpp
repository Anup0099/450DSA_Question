class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
         int n = nums.size();
    set<int> s;
    for (auto it:nums){
        s.insert(it);
    }
    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int rev = 0;
        while (num > 0)
        {
            int rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        s.insert(rev);
    }
    return s.size();
    }
};