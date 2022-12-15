#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int f(int s, int e, int i, vector<vector<int>> &dp)
{
    if (i == 0)
    {
        if (s == e)
            return 1;
        return 0;
    }
    if (dp[s + 1000][i] != -1)
        return dp[s+1000][i];
    if (abs(e - s) > i)
        return 0;
    int left = f(s - 1, e, i - 1, dp) % M;
    int right = f(s + 1, e, i - 1, dp) % M;
    return dp[s + 1000][i] = (left + right) % M;
}
int numberOfWays(int startPos, int endPos, int k)
{
    vector<vector<int>> dp(2001, vector<int>(k + 1, -1));
    return f(startPos, endPos, k, dp);
}
int main() {
    int startPos, endPos, k;
    cin >> startPos >> endPos >> k;
    cout << numberOfWays(startPos, endPos, k);

}