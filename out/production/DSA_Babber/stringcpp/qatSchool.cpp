#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    string ans;
    cin >> s;
    cin >> ans;
    while (t--)
    {

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                ans += "GB";
                i++;
            }
            else
            {
                ans += s[i];
            }
        }
        s = ans;
        ans = "";
    }
    cout << s << endl;
}