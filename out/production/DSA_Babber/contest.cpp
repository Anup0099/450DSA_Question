#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans1 = max((3 * a / 10), a - ((a / 250) * c));
    int ans2 = max((3 * b / 10), b - ((b / 250) * d));
    cout << ans1 << " " << ans2 << endl;
    if (ans1 > ans2)
    {
        cout << "Misha";
    }
    else if (ans1 < ans2)
    {
        cout << "Vasya";
    }
    else
    {
        cout << "Tie";
    }
}