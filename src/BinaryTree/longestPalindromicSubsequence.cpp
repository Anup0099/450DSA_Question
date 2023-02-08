#include <bits/stdc++.h>
using namespace std;
// string lcs(string s1, string s2)
// {
//     int n = s1.length();
//     int m = s2.length();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
//     for (int i = 0; i < n; i++)
//     {
//         dp[i][0] = 0;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         dp[0][i] = 0;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (s1[i - 1] == s2[j - 1])
//             {
//                 dp[i - 1][j - 1] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i - 1][j - 1] = 0 + max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     int i = n - 1, j = m - 1;
//     string ans = "";
//     while (i >= 0 && j >= 0)
//     {
//         if (s1[i] == s2[j])
//         {
//             ans += s1[i];
//             i--;
//             j--;
//         }
//         else
//         {
//             if (dp[i][j + 1] > dp[i + 1][j])
//             {
//                 j--;
//             }
//             else
//             {
//                 i--;
//             }
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
string longestPalindrome(string s)
{
    int n = s.size();
    if (n == 0)
        return "";
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; i++)
        dp[i][i] = true;
    string ans = "";
    ans += s[0];

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                if (j - i == 1 || dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                    if (j - i + 1 > ans.size())
                    {
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
    }
    return ans;
}
int main() {}