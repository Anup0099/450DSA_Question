#include <bits/stdc++.h>
using namespace std;

 int singleNonDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>mapp;
        for (int i = 0; i < nums.size();i++){
            mapp[nums[i]++];
        }
        for(auto x:mapp){
            if(x.second==1){
                return x.first;
            }
        }

    }
int singleNonDuplicate(vector<int>& nums) {
        
       int high=nums.size()-1;
       int low =0;
       int mid;

       if(high==0){
           return nums[0];

       }else if(nums[0]!=nums[1]){
           return nums[0];
       }else if(nums[high]!=nums[high-1]){
           return nums[high];
       }


       while (low<=high)
       {
           mid =low +(high-low)/2;
           if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
       }
       
    }

    int main(){
        vector<int>v ={1,2,3,2,1};
       cout<< singleNonDuplicate(v);
    }