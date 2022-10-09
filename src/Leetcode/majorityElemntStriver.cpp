#include <bits/stdc++.h> 
using namespace std;
vector<int>majorityElemtn(vector<int>&nums){
    unordered_map<int,int>m;
    int n=nums.size();
    vector<int>v;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    for(auto it : m){
        if(it.second>n/3){
            v.push_back(it.first);
        }
    }
    return v;
} 
int main() {
    vector<int>arr = {1,1,1,3,3,2,2,2};
    vector<int>v = majorityElemtn(arr);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
} 