#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
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
vector<string> printF(int ind, vector<int> &vec, string s)
{
    int count = 0;
    vector<int> vec1;

    if (ind == s.size())
    {
        for (auto it : vec)
        {
            cout << it;
        }
        if (vec.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return 0;
    }

    int take = printF(ind + 1, vec, s);
    vec1.push_back(s[ind]);
    int notTake = printF(ind + 1, vec, s);
    vec1.pop_back();

    return vec1;
        
}
int lcs(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}
//count the number of palindromic substrings
int countSubstrings(string s){
    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            string s1 = s.substr(i,j-i+1);
            if(isPalindrome(s1))
            {
                count++;
            }
        }
    }
    return count;
}
int longestPalindromeSubseq(string s)
{
    string s1 = s;
    reverse(s.begin(), s.end());
    string s2 = s;
    return lcs(s1, s2);
    
    
}
int main()
{
    string s = "abc";

    cout<<countSubstrings(s);
}