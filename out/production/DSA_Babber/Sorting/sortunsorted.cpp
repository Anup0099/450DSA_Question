#include <bits/stdc++.h>
using namespace std;

int findUnsortedSubarray(vector<int>& nums) {
        int count= 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
                count++;
            }
        }
        return count;
    }
int main(){

}