#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
// Given N points of the form (xi,yi) on a 2-D plane.

// From each point, you draw 2 lines one horizontal and one vertical. Now some of the lines may overlap each other, therefore you are required to print the number of distinct lines you can see on the plane.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin>>n;
        map<int, int> vx;
        map<int, int> vy;

        for (size_t i = 0; i < n; i++)
        {
            cin >> x >> y;
            vx[x]++;
            vy[y]++;
        }
        int ans = vx.size() + vy.size();
        cout << ans << endl;
    }
}