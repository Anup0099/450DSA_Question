class Solution {
public:
long long find(int i,vector<int>&nums,long long x,int f,vector<vector<long long>>&dp){
        if(i<0)return 0ll;
        if(dp[i][f] != -1)return dp[i][f];
        
        long long val = nums[i];
        //parity is same so add current value and move to next index with same
        //parity
        if((nums[i]%2 && f) || (nums[i]%2==0 && f == 0)){
            val += find(i-1,nums,x,f,dp);
        }
        else {
            //I havve two choices 
            //1st is I don't consider ith value
            long long cur = find(i-1,nums,x,f,dp);
            //here I consider current value ,there is parity shift so -x
            val = max(cur, val + find(i-1,nums,x,1-f,dp) - x);
             
        }
        
        return dp[i][f] = val;
    }
    
    long long maxScore(vector<int>& nums, int x) {
         
        int n = nums.size();
        vector<vector<long long> >dp(n,vector<long long>(2,-1ll));
        reverse(nums.begin(),nums.end());
        int f = 0;
        if(nums[n-1]%2)f=1;
        return find(n-1,nums,x,f,dp);
        
    }
};