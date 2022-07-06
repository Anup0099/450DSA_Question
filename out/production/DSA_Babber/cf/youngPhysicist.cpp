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

    int ans = 0,ans1=0,ans2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           ans +=   v[i][0];
           ans1 +=   v[i][1];
           ans2 +=   v[i][2];
        }
    }
    if(ans == 0 && ans1 == 0 && ans2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

// int a, b, c, n, x, y, z;
// int main()
// {
//     for (cin >> n; n--; x += a, y += b, z += c)
//         cin >> a >> b >> c;
//     cout << (x || y || z ? "NO" : "YES");
// }