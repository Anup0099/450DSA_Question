#include <bits/stdc++.h> 
using namespace std;
void prints(int n,vector<int>&v){
    if(n==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<v.size();i++){
        v.push_back(v[i]);
        prints(n-i,v);
        v.pop_back();
    }

} 
void pickNotPick(int ind,int sum,vector<int>&arr,vector<int>&nums){
    if(ind==nums.size()){
        if(sum==0){
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //pick 
    if(array[ind]<sum){
        nums.push_back(arr[ind]);
        pickNotPick(ind+1,sum-arr[ind],nums);
        nums.pop_back();
    }
    //not pick
    pickNotPick(ind+1,sum,nums);
}
int main() {
    
    int n;cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    prints(n,v);    



} 