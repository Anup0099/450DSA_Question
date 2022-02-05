#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dividend = n;
        int divisor = 7;
        int remainder = dividend % divisor;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else if (n <= 13)
        {
            cout << 14;
        }

        else
        {
            int ans = n - remainder;
            cout << ans << endl;
        }
    }
}