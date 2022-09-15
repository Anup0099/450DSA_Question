#include <bits/stdc++.h> 
using namespace std;
vector<int>count(vector<int>&arr){
    vector<int>ans;
    map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it.second==1){
            ans.push_back(it.first);
        }
    }
    return ans;
} 


//using bit manupulation
//xor of all elemnts 
int main() {

    vector<int>arr={1,2,3,2};
    vector<int>ans=count(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
} 