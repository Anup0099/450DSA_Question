#include <bits/stdc++.h>
using namespace std;



int majorityElemtn(vector<int>&nums){
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    int maxi =INT_MIN;
    int number ;
    for(auto it:m){
        if(it.second>maxi){
            maxi = it.second;
            number = it.first;
        }
    }
    if(maxi>=nums.size()/2){
        return number;
    }
    return number;
}

