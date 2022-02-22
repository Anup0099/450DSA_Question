#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + c;
        if (sum > b)
        {
            cout << sum << endl;
        }
        else if (a = b = c)
        {
            cout << sum << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
}