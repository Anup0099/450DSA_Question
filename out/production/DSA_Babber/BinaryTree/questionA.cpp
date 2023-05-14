#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '?')
                count++;
        }
        if (s[0] == '0')
        {
            cout << 0 << endl;
        }else if (s[0] == '?')
        {
            cout << 9 * pow(10, count - 1) << endl;
        }
        else
        {
            cout << pow(10, count) << endl;
        }
    }
}