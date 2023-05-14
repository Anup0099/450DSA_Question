#include <bits/stdc++.h>
using namespace std;
// Consider an array a1,a2,…,an
//  consisting of numbers 1
//  and −1
// . Define A
// -characteristic of this array as a number of pairs of indices 1≤i<j≤n
// , such that ai⋅aj=1
// .

// Find any array a
//  with given length n
//  with A
// -characteristic equal to the given value k
// .
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n, k;
        if (n == k)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
            cout << endl;
        }
    }
}