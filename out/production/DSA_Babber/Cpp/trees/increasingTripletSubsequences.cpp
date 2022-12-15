#include <bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int> &nums)
{
    // for(int i=0;i<nums.size()-1; i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]<nums[j]){
    //             for(int k=j+1;k<nums.size();k++){
    //                 if(nums[j]<nums[k]){
    //                     return true;
    //                 }
    //             }
    //         }
    //     }
    // }
    // return false;
    //using three loops 
    // for(int i=0;i<nums.size()-2; i++){
    //     for(int j=i+1;j<nums.size()-1;j++){
    //         if(nums[i]<nums[j]){
    //             for(int k=j+1;k<nums.size();k++){
    //                 if(nums[j]<nums[k]){
    //                     return true;
    //                 }
    //             }
    //         }
    //     }
    // }
    // return false;
}
bool increasingTriplet(vector<int>&nums){
    int first=INT_MAX;
    int second=INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=first){
            first=nums[i];
        }
        else if(nums[i]<=second){
            second=nums[i];
        }
        else{
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout<<increasingTriplet(nums);
}