#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count1 = 0, count2 = 0;

        if (s.length() == 1 || s.length()==2)
        {
            cout << 0 << endl;
            continue;
        }
        for (size_t i = 0; i < s.length(); i++)
        {
            /* code */

            if (s[i] == '0')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if (count1 == count2)
        {
            cout << 0 << endl;
        }
        int ans = min(count1, count2);
        cout << ans << endl;
    }
    return 0;
}