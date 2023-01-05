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
int util(int n, int curr)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = 0; 
    for (int i = curr; i < 6; i++)
    {
        ans += util(n - 1, i);
        cout<<ans<<endl;
    }
    return ans;
}
int CountVowelStrings(int n)
{
    return util(n, 1);
}
int main()
{
    int n = 1;
    cout << CountVowelStrings(n);
    return 0;
}