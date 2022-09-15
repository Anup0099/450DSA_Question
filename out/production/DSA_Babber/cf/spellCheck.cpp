#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string t = "Timur";
        unordered_map<char, int> mppp;

        for (int i = 0; i < s.length(); i++)
        {
            int j = s[i] - 'a';
            mppp[j]++;
        }
        if (s.length() > 5)
        {
            cout << "NO" << endl;
        }
        else if (mppp['T' - 'a'] == 1 && mppp['i' - 'a'] == 1 && mppp['m' - 'a'] == 1 && mppp['u' - 'a'] == 1 && mppp['r' - 'a'] == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
