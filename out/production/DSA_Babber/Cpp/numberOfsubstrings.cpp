#include <bits/stdc++.h>
using namespace std;

// Given a string s consisting only of characters a, b and c.

// Return the number of substrings containing at least one occurrence of all these characters a, b and c.
int numberOfSubstrings(string s)
{

    int n = s.size();
    int ans = 0;
    unordered_map<char, int> mp;
    int i = 0, j = 0;
    while (j < n)
    {
        mp[s[j]]++;
        while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0)
        {
            ans += n - j;
            mp[s[i]]--;
            i++;
        }
        j++;
    }
    return ans;
    
}
int main() {}