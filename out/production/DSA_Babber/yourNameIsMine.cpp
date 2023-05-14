#include <bits/stdc++.h>
using namespace std;
bool LCS(string s1, string s2)
{
    int n = s1.size(), m = s2.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
        {
            i++;
        }
        j++;
    }
    return i == n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        bool ans = ((m > n) ? LCS(s2, s1) : LCS(s1, s2));
        cout << (ans ? "YES" : "NO") << endl;
    }
}