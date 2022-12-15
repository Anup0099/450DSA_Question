#include <bits/stdc++.h> 
using namespace std;
void moveZeroes(vector<int>&nums){
    int k=0;
    while(k<nums.size()){
        if(nums[k]==0){
            break;
        }else{
            k++;
        }
    }
    //finding zeroes and immediate non zeroes elements 
    int i=k,j=k+1;
    while(i<nums.size() && j<nums.size()){
        if(nums[j]!=0){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
        }
        j++;
    }
   for(int i=0;i<nums.size();i++){
       cout<<nums[i]<<" ";
   }
} 
int main() {
    vector<int>arr = {0,1,0,3,12};
    moveZeroes(arr);
} 