class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    int sum = 1;
    vector<int> v;
    for (int i = 0; i <n; i++)
    {
        if ((n%(i+1) == 0))
        {
            v.push_back(nums[i]);
        }
    }
        for(auto it:v){
            cout<<it;
        }
 
    for (int i = 0; i < v.size(); i++)
    {
        sum = v[i] * v[i];
        ans += sum;
    }
    return ans;
    }
};