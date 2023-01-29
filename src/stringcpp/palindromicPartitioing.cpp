#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int n;
    bool isPalindrome(string &s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    void backtrack(string &s,int idx,vector<string>curr,vector<vector<string>>&result){
        if(idx==n){
            result.push_back(curr);
            return;
        }
    }
    vector<vector<int>> partition(string s)
    {
        
    }
};
int main() {}