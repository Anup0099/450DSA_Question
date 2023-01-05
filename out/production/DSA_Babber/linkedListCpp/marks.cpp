#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ans=0;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        bool wasBest = false;
        for (int j = 0; j < m; ++j)
        {
            bool isBest = true;
            for (int k = 0; k < n; ++k)
                if (a[k][j] > a[i][j])
                    isBest = false;
            if (isBest)
                wasBest = true;
        }
        if (wasBest)
            ans++;
    }
    cout << ans << endl;
}