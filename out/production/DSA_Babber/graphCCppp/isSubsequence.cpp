#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int n = s.size();
    int m = t.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if (i == n)
    {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}