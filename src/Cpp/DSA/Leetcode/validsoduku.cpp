#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int ans = k / x;
        if (ans > n)
        {
            cout << n << endl;
        }
        else
        {

            cout << ans << endl;
        }
    }
}