#include <bits/stdc++.h> 
using namespace std;
vector<int>findanagrams(string s,string p){
    int len_s=s.length();
    int len_p= p.length();
    if(len_s<len_p)return {};
    vector<int>p_freq(26,0);
    vector<int>s_freq(26,0);
    //first row
    for(int i=0;i<len_p;i++){
        p_freq[p[i]-'a']++;
        s_freq[s[i]-'a']++;
    }
    vector<int>ans;
    if(p_freq==s_freq)ans.push_back(0);
    for(int i=len_p;i<len_s;i++){
        s_freq[s[i]-'a']++;
        s_freq[s[i-len_p]-'a']--;
        if(p_freq==s_freq)ans.push_back(i-len_p+1);
    }
    return ans;
} 
int main() {} 