#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           ans +=   v[i][j];
        }
    }
    if(ans == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}