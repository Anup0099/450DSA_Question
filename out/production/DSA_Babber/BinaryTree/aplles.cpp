#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int ans = 0;
    int ans2 = 0;
    if (n % 3 == 0)
    {
        cout << (n / 3) * y;
    }
    else
    {
        cout << (n - (n / 3)) * x;
    }
}