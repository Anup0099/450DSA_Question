#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back
            define mp make_pair
                define f first
                    define s second
                        define all(x) x.begin(),
    x.end()
        define rall(x) x.rbegin(),
    x.rend() using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
            if (i + j == n - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    if (n % 2 != 0)
    {
        sum -= mat[n / 2][n / 2];
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}