#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int b;
        cin >> a;
        cin >> b;
        int ans =(a + 2*b + 1);
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ans<< endl;
        }
    }
}