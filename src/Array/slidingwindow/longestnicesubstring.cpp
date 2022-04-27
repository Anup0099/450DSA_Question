#include <bits/stdc++.h>
using namespace std;

string longestNiceSubstring(string s)
{
    if(s.size()<2)return "";
    unordered_set<int> set;
    for (int i = 0; i < s.size(); i++)
    {
        set.insert(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(set.count(tolower(s[i]))==true && set.count(toupper(s[i]))==true){
            continue;
        }
        string prev = longestNiceSubstring(s.substr(0,i));
        string next =longestNiceSubstring(s.substr(i+1));
        return prev.size()>=next.size()?prev:next;
    }
    return s;
    
}
