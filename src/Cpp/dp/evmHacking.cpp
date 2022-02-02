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
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        int sum = a + b + c;
        int avg = (p + q + r) / 2;
        // int maxi = max(max(p, q), r);
        if (sum > avg)
        {
            cout << "YES" << endl;
        }
        else if (p + b +c  > avg)
        {
            cout << "YES" << endl;
        }
        else if (a + q + c > avg)
        {
            cout << "YES" << endl;
        }
        else if (a + b + r > avg)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}