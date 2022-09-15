#include <bits/stdc++.h> 
using namespace std;
int longestLength(string s){
    int ans=0;
    map<char,int>m;
    int l=0;
    for(int i=0;i<s.size();i++){
        if(m.count(s[i])==0){
            m[s[i]]=i;

        }else{
            ans=max(ans,i-l);
            while(l<=m[s[i]]){
                m.erase(s[l]); 
                l++;

            }
            m[s[i]]=i;
        }

    }
    if(s.size()-l>ans){
        ans=s.size()-l;
    }
    return ans;
} 
int main() {} 