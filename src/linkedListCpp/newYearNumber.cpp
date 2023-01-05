#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2020 || n == 2021)
        {
            cout << "YES" << endl;
        }
        else
        {
            int a = n / 2020;
            int b = n % 2020;
            if (a >= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}