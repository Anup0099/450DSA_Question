#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>>ans;
vector<int>temp;
void recursion(int k,int n,int i){
    if(k==0 and n==0){
        ans.push_back(temp);
        return;
    }
    for (int  it = 1; it <= 9; it++)
    {
        temp.push_back(it);
        recursion(k-1,n-it,i+1); 
        temp.pop_back();
    }
    
} 
vector<vector<int>>combinationSum3(int k,int n){
    recursion(k,n,1);
    return ans;
}
int main() {} 