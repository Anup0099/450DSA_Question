#include <bits/stdc++.h>
using namespace std;
// A binary string is a string consisting only of the characters 0 and 1. You are given a binary string s1s2…sn. It is necessary to make this string non-decreasing in the least number of operations. In other words, each character should be not less than the previous. In one operation, you can do the following:

// Select an arbitrary index 1≤i≤n in the string;
// For all j≥i, change the value in the j-th position to the opposite, that is, if sj=1, then make sj=0, and vice versa.
// What is the minimum number of operations needed to make the string non-decreasing?

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        //using negetion to make string non-decreasing
        for (int i = 0; i < n; i++)
        {
            if(s[i]!=s[i+1])
            {
                ans++;
            }

        }
        cout << ans << endl;

       
       
    }
}