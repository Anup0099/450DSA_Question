#include <bits/stdc++.h>
using namespace std;
// Given a list of unique words, return all the pairs of the distinct indices (i, j) in the given list, so that the concatenation of the two words words[i] + words[j] is a palindrome.
bool ispalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
vector<vector<int>> palindromePairs(vector<string> &words)
{
    vector<vector<int>>ans;
    for (int i = 0; i < words.size(); i++){
        for(int j = 0; j < words[i].size(); j++){
            string s1=words[i]+ words[j];
            string s2=words[j]+ words[i];
            if(ispalindrome(s1)){
               vector<int>v;
                v.push_back(i);
                v.push_back(j);
                ans.push_back(v);
            }
            if(ispalindrome(s2)){
               vector<int>v;
                v.push_back(j);
                v.push_back(i);
                ans.push_back(v);
            }
        }
    }
    return ans;
    
}
vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> ans;
        int n = words.size();
        if(n<2) return ans;
        unordered_map<string, int> m;
        for(int i=0;i<n;++i){
            
            auto s= words[i];
            reverse(s.begin(),s.end());
            m[s]=i;
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<=words[i].size(); ++j){
                string st1 = words[i].substr(0,j); // prefix
                string st2 = words[i].substr(j);    //sufix           
                 
                 if(m.count(st1) && isPalindrome(st2) && m[st1] != i) {
                     ans.push_back({i, m[st1]});    
                 }

                 if(!st1.empty() && m.count(st2) && isPalindrome(st1) && m[st2] != i) {
                     ans.push_back({m[st2], i});
                 }
            }            
        }
        return ans;
    }

int main() {}