#include <bits/stdc++.h> 
using namespace std;
int longestOnes(int n,vector<int>&nums,int k){
    int i=0,j=0;
    int ans=0;
    int count=0;
    while(j<n){
        if(nums[j]==0){
            count++;
        }
        if(count>k){
            while(nums[i]!=0){
                i++;
            }
            i++;
            count--;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
} 
int main() {} 