#include <bits/stdc++.h>
using namespace std;

// You are given two strings s and t consisting of only lowercase English letters.

// Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.

// A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.
int appendCharacters(string s, string t)
{
    int n = s.size();
    int m = t.size();
    int ans = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            ans++;
        }
    }
    if (j < m)
    {
        ans += m - j;
    }
    return ans;
}
int main() {}