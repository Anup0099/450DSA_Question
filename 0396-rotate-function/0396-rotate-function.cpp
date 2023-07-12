class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
          int n= nums.size();
    int sum=0;
    int totalSum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        totalSum+=i*nums[i];

    }
    int ans= INT_MIN;
    for(int i=n-1;i>=0;i--){
        totalSum +=sum-n*nums[i];
        ans= max(ans,totalSum);
    }
    return ans;

    }
};