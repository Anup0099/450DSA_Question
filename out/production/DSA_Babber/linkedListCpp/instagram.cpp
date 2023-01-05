#include <bits/stdc++.h>
using namespace std;

// Chef categorises an instagram account as spam, if, the following count of the account is more than 1010 times the count of followers.

// Given the following and follower count of an account as XX and YY respectively, find whether it is a spam account.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two space-separated integers XX and YY — the following and follower count of an account, respectively.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 10 * y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}