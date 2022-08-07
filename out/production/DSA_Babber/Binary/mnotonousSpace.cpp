#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int check(int x)
{
    return arr[x] >= arr[0];
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lo = 0;
    int hi = n - 1;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (check(mid))
        {
            lo = mid + 1;
        }
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout << ans << endl;
}
int main()
{
    solve(); 
}