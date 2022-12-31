#include <bits/stdc++.h> 
using namespace std;
int  solve (int ind,vector<int>&nums,vector<int>&dp){
    if(ind==nums.size()-1){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int ans=INT_MAX;
    for(int i=1;i<=nums[ind];i++){
        if(ind+i<nums.size()){
            ans=min(ans,1+solve(ind+i,nums,dp));
        }
    }
    return dp[ind]=ans;
}
int jump(vector<int>&nums){

} 
int main() {} 