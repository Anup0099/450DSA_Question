#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 2 !=0)
    {
        int x = (n + 1)>>1;
        for (int i = n; i > x; i--)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= x; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}