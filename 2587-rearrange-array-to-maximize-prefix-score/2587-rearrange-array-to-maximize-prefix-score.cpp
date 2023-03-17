class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long maxScore = 0;
    sort(nums.begin(), nums.end(), greater<int>());

    // prefix array
   
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        maxScore +=nums[i];
        if (maxScore > 0)
        {
            ans++;
        }
    }
    return ans;
    }
};