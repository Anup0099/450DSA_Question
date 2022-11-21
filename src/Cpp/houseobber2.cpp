#include <bits/stdc++.h> 
using namespace std;
int maxNonadjacent(vecor<int>&nums){
    int n=nums.size();
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int take=nums[i];
        if(i>1){
            take+=prev2;
        }
        int nottake=0+prev;
        int curri=max(take,nottake);
        prev2=prev;
        prev=curri;
    }
    return prev;
}
  int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int>nums1(nums.begin(),nums.end()-1);
        vector<int>nums2(nums.begin()+1,nums.end());
        int ans1=maxNonadjacent(nums1);
        int ans2=maxNonadjacent(nums2);
        return max(ans1,ans2); 
    } 
int main() {} 