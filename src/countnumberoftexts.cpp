#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int add(int x, int y)
{
    return (x % mod + y % mod) % mod;
}
int countTexts(string s)
{
    int n = s.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] % mod;
        if (i - 2 >= 0 and s[i - 2] == s[i - 1])
        {
            dp[i] = add(dp[i], dp[i - 2]);
            if (i - 3 >= 0 and s[i - 3] == s[i - 2])
            {
                dp[i] = add(dp[i], dp[i - 3]);
                if (i - 4 >= 0 and s[i - 4] == s[i - 3] and (s[i - 4] == '7' or s[i - 4] == '9'))
                {
                    dp[i] = add(dp[i], dp[i - 4]);
                }
            }
        }
    }
    return dp[n];
}
int main() {}