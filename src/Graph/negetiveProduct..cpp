#include <bits/stdc++.h>
using namespace std;
// Chef is given three numbers
// �
// ,
// �
// ,
// A,B, and
// �
// C.

// He wants to find whether he can select exactly two numbers out of these such that the product of the selected numbers is negative.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < 0 && b < 0)
        {
            cout << "NO" << endl;
        }
        else if (a < 0 && c < 0)
        {
            cout << "NO" << endl;
        }
        else if (b < 0 && c < 0)
        {
            cout << "NO" << endl;
        }
        else if (a > 0 and b > 0 and c > 0)
        {
            cout << "NO" << endl;
        }
        else if (a == 0 and b == 0 and c < 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}