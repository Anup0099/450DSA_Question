#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        int mid = start +(start-end)/2;
        while(start < end){
            if(target>nums[mid]){
                return mid+1;
            }else if(target<nums[start]){
                mid = mid-1;
            }else{
                return mid;
            }
        }
        return start;
    }
int main(){

}