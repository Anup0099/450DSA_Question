#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
// You are given a string s of length n and a number k. Let's denote by rev(s) the reversed string s (i.e. rev(s)=snsn−1...s1). You can apply one of the two kinds of operations to the string:

// replace the string s with s+rev(s)
// replace the string s with rev(s)+s
// How many different strings can you get as a result of performing exactly k operations (possibly of different kinds) on the original string s?

// In this statement we denoted the concatenation of strings s and t as s+t. In other words, s+t=s1s2...snt1t2...tm, where n and m are the lengths of strings s and t respectively.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin >> s;
        }
        string rev = string(s.rbegin(), s.rend());
        string a = rev + s;
        string b = s + rev;
        int count = 1;
        if (k == 0 || k == 1)
        {
            cout<< 1<<endl;
        }
        else
        {

            for (size_t i = 0; i < k; i++)
            {
                /* code */
                string a = rev + s;
                count++;
            }
        cout << count << endl;
        }
    }
}