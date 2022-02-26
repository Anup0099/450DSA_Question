
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
        int n, w;
        cin >> n >> w;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, count ;
        sort(arr.rbegin(),arr.rend());
        for (int i = 1; i <=n ; i++)
        {
            sum += arr[i-1];
            
            if(sum >= w)
            {   count=i;
                break;
            }
        }
        int ans = n - count;
        cout << ans << endl;
    }
}