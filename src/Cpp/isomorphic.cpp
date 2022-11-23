#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
     set<char>s;
     map<char,char>m;
     int n=s.size();
     for (int i = 0; i < count; i++)
     {
        if(m.find(s[i])!=m.end()){
            if(m[s[i]]!=t[i]){
                return false;
            }else if(s[t[i]]!=s.end()){
                return false;
            }
            m[s[i]] = t[i];
            s.insert(t[i]);
        }
     }
     return true;
     
}
int main() {}