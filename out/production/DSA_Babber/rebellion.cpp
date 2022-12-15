#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << endl;
            continue;
        }
        int L, R;
        for (int i = n; i > 0; i--)
        {
            if (a[i] == 0)
            {
                R = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                L = i;
                break;
            }
        }
        int ans = 0;
        while (L < R)
        {
            if (a[L] == 1 and a[R] == 0)
            {
                a[R]++;
                a[L]--;
                ans++;
            }
            else if (a[L] == 0)
            {
                L++;
            }
            else if (a[R] == 1)
            {
                R--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
