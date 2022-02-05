#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    // while(t--){
    //     int n;cin>>n;
    //     int ans = (n/2)+1;
    //     cout<<ans<<endl;
    // }

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = x - y;
        int ans1 = 0;
        int sum = 0;
        int infected = 0;
        if (y == 0)
        {
            cout << x << endl;
        }
        else if ( ans > 0)
        {

            ans1 = y * 2;
            sum = ans + ans1;
            cout << sum << endl;
        }
        else 
        {
            infected = (y * 2) - 1;
            cout << infected;
        }
    }
}