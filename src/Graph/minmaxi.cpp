#include <bits/stdc++.h>
using namespace std;

int minmaxgame(vector<int>&nums){
    while(nums.size()!=1){
        vector<int>temp; 
        int ok=1;
        for(int i=0; i<nums.size();i=i+2){
            if(ok){
                temp.push_back(min(nums[i],nums[i+1]));//if flag is 1 then push the min of the two numbers
            }else{
                temp.push_back(max(nums[i],nums[i+1]));//if flag is 0 then push the max of the two numbers
            }
            ok=1-ok;
        }
        nums.clear();//clear the vector nums beacuse we have to store the new values in the vector   
        nums=temp;//copy the values from temp to nums
    }
    return nums[0];
}