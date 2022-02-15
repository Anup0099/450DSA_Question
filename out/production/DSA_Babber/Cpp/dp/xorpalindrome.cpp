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
        int n;
        cin >> n;
        string s;
        cin>>s;
        int count0 = 0;
        int count1 = 0;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        if (s.length() % 2 == 0)
        {
            if (count0 == count1)
            {
                cout << "Yes" << endl;
            }
            else if (count0 == s.length() || count1 == s.length())
            {
                cout << "Yes" << endl;
            }
            else if (count0 % 2 == 0 && count1 % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}