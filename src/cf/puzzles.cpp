#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int ans = 1000;

    sort(arr, arr + m); // sort the array in ascending order
    int minsums = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++)
    {
        ans = min(ans, arr[i + n - 1] - arr[i]);
        // cout<<ans<<endl;
    }
    cout << ans << endl;
}