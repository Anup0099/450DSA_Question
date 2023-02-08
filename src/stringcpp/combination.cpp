#include <bits/stdc++.h> 
using namespace std; 
vector<vector<int>>ans;
void backtack(int n,int start,vector<int>temp,int k){
    if(temp.size()==k){
        ans.push_back(temp);
        return;
    }
    for(int i=start;i<=n;i++){
        temp.push_back(i);
        backtrack(n,i+1,temp,k);
        temp.pop_back();
    }
}
vector<vector<int>>combinae(int n,int k){
    vector<itn>temp;
    backtrack(n,1,tem,k);
    return ans;
}
int main() {} 