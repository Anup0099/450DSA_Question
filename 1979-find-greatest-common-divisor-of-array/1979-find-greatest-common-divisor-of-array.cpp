class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
         sort(nums.begin(), nums.end());
        int ans = gcd(nums.front(), nums.back());
        return ans;
        
    }
};