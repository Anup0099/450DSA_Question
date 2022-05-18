#include <bits/stdc++.h>
using namespace std;
 int longestConsecutive(vector<int>& nums) {
     int n= nums.size();
     sort(nums.begin(), nums.end());
     int prev = nums[0];
     int curr =1;
     int ans =1;
     for (int i = 1; i < n; i++)
     {
         if(nums[i]==prev+1){
             curr++;
         }else if(nums[i]!=prev){
             curr=1;
         }
         prev =nums[i];
         ans = max(ans,curr);
         
     }
     return ans;
     


    }
int main(){

}