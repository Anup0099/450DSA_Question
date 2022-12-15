#include <bits/stdc++.h>
using namespace std;
// A string is good if there are no repeated characters.

// Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.

// Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

// A substring is a contiguous sequence of characters in a string.
int countGoodSubstrings(string s)
{
    // int n = s.size();
    // int ans = 0;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])
    //         ans++;
    // }
    // return ans;

    int i = 0, j = 0;
    int n = s.size();
    int ans = 0;

    while (j < n)
    {

        if (j - i + 1 == 3)
        {

            string temp = s.substr(i, 3);

            map<int, int> mp;
            for (auto i : temp)
            {
                mp[i]++;
            }

            if (mp.size() == 3)
            {
                ans++;
            }

            i++;
        }
        j++;
    }

    return ans;
}
int main() {}