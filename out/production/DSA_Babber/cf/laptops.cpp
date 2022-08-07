#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.pb({a, b});
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n-1; i++)
    {
        if (v[i].second > v[i+1].second)
        {
            cout << "Happy Alex" << endl;
        } 
    }
    cout << "Poor Alex" << endl;
}
int main()
{

    // int t, a, b;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    //     cin >> a >> b;
    //     if (a != b)
    //     {

    //         cout << "Happy Alex" << endl;
    //         return 0;
    //     }
    // }
    // cout << "Poor Alex" << endl;
    solve();
}
