#include <bits/stdc++.h>
using namespace std;

// Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

// After the cutting each ribbon piece should have length a, b or c.
// After the cutting the number of ribbon pieces should be maximum.
// Help Polycarpus and find the number of ribbon pieces after the required cutting.

// Input
// The first line contains four space-separated integers n, a, b and c (1 ≤ n, a, b, c ≤ 4000) — the length of the original ribbon and the acceptable lengths of the ribbon pieces after the cutting, correspondingly. The numbers a, b and c can coincide.

// Output
// Print a single number — the maximum possible number of ribbon pieces. It is guaranteed that at least one correct ribbon cutting exists.
int rec(int n, int a, int b, int c, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    int res = max(rec(n - a, a, b, c, dp), max(rec(n - b, a, b, c, dp), rec(n - c, a, b, c, dp)));
    if (res == -1)
    {
        dp[n] = -1;
        return -1;
    }
    dp[n] = res + 1;
    return dp[n];
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, 0);
    cout << rec(n, a, b, c, dp);
}