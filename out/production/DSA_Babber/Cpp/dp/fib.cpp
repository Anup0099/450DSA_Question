#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int dp[n + 1] = {0};
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}


int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
       
        for (size_t i = 0; i < m; i++)
        {
            /* code */
            for (size_t j = 0; j < m; j++)
            {
                /* code */
                cout << "1 ";
            }
            cout << endl;
        }
    }
}