#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string str;
        cin >> str;
        vector<ll> red, blue;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'R')
            {
                red.push_back(arr[i]);
            }
            else
            {
                blue.push_back(arr[i]);
            }
        }
        sort(red.begin(), red.end(), greater<ll>());
        sort(blue.begin(), blue.end());
        bool ok = true;
        for (ll i = 0; i < red.size(); i++)
        {
            if (red[i] > n - i)
            {
                ok = false;
            }
        }
        for (ll i = 0; i < blue.size(); i++)
        {
            if (blue[i] < i + 1)
            {
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}