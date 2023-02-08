#include <bits/stdc++.h>
using namespace std;
// int func(int i, int j, vector<vector<int>> &dp)
// {
//     if (i == 0 && j == 0)
//         return 1;
//     if (i < 0 || j < 0)
//         return 0;
//     if (dp[i][j] != -1)
//         return dp[i][j];
//     int up = func(i - 1, j, dp);

//     // cout << "up: " << up << endl;

//     int right = func(i, j - 1, dp);

//     // cout << "right: " << right << endl;

//     // print the dp array
//     for (int i = 0; i < dp.size(); i++)
//     {
//         for (int j = 0; j < dp[0].size(); j++)
//         {
//             cout << dp[i][j] << " ";
//         }

//     }
//     cout << endl;

//     return dp[i][j] = up + right;
// }
/// tabulation
int func2(int m, int n, vector<vector<int>> &dp)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
                continue;
            }
            int up = 0, right = 0;
            if (i > 0)
                up = dp[i - 1][j];
                cout<<"up: "<<up<<endl;
            if (j > 0)
                right = dp[i][j - 1];
                cout<<"right: "<<right<<endl;

            // print the dp array

            dp[i][j] = up + right;
        }
    }
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
    }
    cout << endl;
    return dp[m - 1][n - 1];
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));

    return func2(m, n, dp);
}
int main()
{

    cout << uniquePaths(3, 2);
}