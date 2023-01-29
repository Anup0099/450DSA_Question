#include <bits/stdc++.h>
#define ll long long
using namespace std;
// You are given an integer n. Find a sequence of n integers a1,a2,…,an such that 1≤ai≤109 for all i and
// a1⊕a2⊕⋯⊕an=a1+a2+⋯+ann,
// where ⊕ represents the bitwise XOR.

// It can be proven that there exists a sequence of integers that satisfies all the conditions above.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
        }
        else
        {
            cout << "1 3";
            for (int i = 3; i <= n; i++)
            {
                cout << " " << 2;
            }
        }
        cout << endl;
    }
}