#include <bits/stdc++.h>
using namespace std;
void findCombination(int ind,int target,vector<int>&arr,vector<vector<int>>&ds){
    if(ind==arr.size()){
        if(target==0){
            ds.push_back(arr);
        }
        return;
    }
    //pick up the element at index
    if(arr[ind]==target){
        ds.push_back(arr);
        
    }
}
vector<vector<int>>combinationSum(vector<int>&candidates,int target){
    vector<vector<int>>ans;
    vector<int>ds;
   
} 
int main(){
    
}