#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int ans = a / 100;
    int left = a % 100;

    ans += left / 20;
    left = left % 20;

    ans += left / 10;
    left = left % 10;

    ans += left / 5;
    left = left % 5;

    ans += left / 1;

    cout << ans << endl;
}