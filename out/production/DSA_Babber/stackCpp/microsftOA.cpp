#include <bits/stdc++.h>
using namespace std;

int go(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    return 1 + max(go(n - a, a, b, c), max(go(n - b, a, b, c), go(n - c, a, b, c)));

}
int main()
{
    // int n, a, b, c;
    // cin >> n >> a >> b >> c;
    // int dp[n + 1];
    // dp[0] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     dp[i] = INT_MIN;
    //     if (i - a >= 0)
    //         dp[i] = max(dp[i], dp[i - a] + 1);
    //     if (i - b >= 0)
    //         dp[i] = max(dp[i], dp[i - b] + 1);
    //     if (i - c >= 0)
    //         dp[i] = max(dp[i], dp[i - c] + 1);
    // }
    // cout << dp[n];

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << go(n, a, b, c);

    return 0;
}