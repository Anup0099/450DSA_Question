#include <bits/stdc++.h>
using namespace std;

int countSortedVowels(int n)
{
    vector<int> dp(5, 1);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            dp[j] += dp[j + 1];
        }
    }
    for (auto it : dp)
    {
        cout << it << " ";
    }
    int ans = 0;
    for (auto it : dp)
    {
        ans += it;
    }
    return ans;
}
int main() {
    int n = 2;
    cout << countSortedVowels(n);
    return 0;
}