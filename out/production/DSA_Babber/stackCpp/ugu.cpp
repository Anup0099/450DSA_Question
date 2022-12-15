#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, i, j, ans, f = 0;
    string a;
    cin >> t;

    for (; t--;)
    {
        f = 0;
        cin >> n;

        cin >> a;
        ans = 0;
        for (i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                if (f == 0 && a[i] == '0')
                {
                    f = 1;
                    ans++;
                }
                else if (f == 1)
                {
                    ans++;
                }
            }
        }

         cout << ans << "\n";
    }
}
