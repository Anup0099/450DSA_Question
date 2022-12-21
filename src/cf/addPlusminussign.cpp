#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t, n, i, one, j;
    string a;

    cin >> t;

    for (; t--;)
    {
        cin >> n;
        cin >> a;

        one = 0;

        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i] == '1')
                {
                    one++;
                }
            }
            else
            {
                if (a[i] == '1')
                {
                    one++;
                    if ((one % 2) == 0)
                        cout << "-";
                    else
                        cout << "+";
                }
                else
                {
                    cout << "+";
                }
            }
        }
        cout << "\n";
    }
}