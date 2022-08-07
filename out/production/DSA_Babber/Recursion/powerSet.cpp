#include <bits/stdc++.h> 
using namespace std;
void helper(string s,int ind,string curr,vector<int> &res){
    if(ind==s.length()){
        res.push_back(curr.length());
        return;
    }
    //include string[ind] in the current string
    helper(s,ind+1,curr,res);
    //exclude string[ind] in the current string
    helper(s,ind+1,curr+s[ind],res);
}
vector<int> power(string s){
    vector<int>res;
}
int main() {} 

