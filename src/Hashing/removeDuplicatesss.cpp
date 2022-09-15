#include <bits/stdc++.h> 
using namespace std;

vector<int>remove(vector<int>arr,int key){
   unordered_map<int,bool>mapp;
    vector<int>ans;
    for(int i=0;i<arr.size(); i++){
        if(mapp.count(arr[i])==0){
            mapp[arr[i]]=true;
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main() {
    vector<int>arr={1,2,3,4,5,6,7,8,9,9};
    int key=9;
    vector<int>ans=remove(arr,key);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
} 