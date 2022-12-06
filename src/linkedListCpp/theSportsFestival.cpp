#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;
        if (n % 2 == 0)
        {
            ans = n / 2;
        }else{
            ans = (n / 2) + 1;
        }
        cout << ans << endl;
    }
}