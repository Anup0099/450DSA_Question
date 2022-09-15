#include <bits/stdc++.h> 
using namespace std;
  bool isIsogram(string s)
    {
        //Your code here
        map<char,int> mp;
        for (int  i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(it.second>1){
                return false;
                break;
            }
        }
        return true;
        
    }
int main() {
    string s;
    cin>>s;
    cout<<isIsogram(s);
    return 0;
} 