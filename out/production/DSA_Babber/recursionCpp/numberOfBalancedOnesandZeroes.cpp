#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back using namespace std;
int findTheLongestBalancedSubstring(string s)
{
    int n = s.length();
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count++;
        else
            count--;
        if (count == 0)
            ans = max(ans, i + 1);
        if (count < 0)
            count = 0;
    }
    count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            count++;
        else
            count--;
        if (count == 0)
            ans = max(ans, n - i);
        if (count < 0)
            count = 0;
    }
    return ans;
  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}