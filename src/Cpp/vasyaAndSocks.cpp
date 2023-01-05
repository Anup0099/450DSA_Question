#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int days = 0;
    int sum = 0;
    int ans = 0;
    if (n < m)
    {
        cout << n;
        return 0;
    }
    {

        while (n >= m)
        {
            days = n - m + 1;
            sum += m;
            n = days;
            ans = sum + n;
        }
        cout << ans;
    }

    // int n,m;
    // cin>>n>>m;
    // int resuult=(n-1)/(m-1);
    // cout<<n+resuult;

    return 0;
}