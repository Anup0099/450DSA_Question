#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int maxi = max(n, m);
        int mini = min(n, m);
        int ans = (mini - 1) + (maxi - 1) + mini;
        if(n==1 && m==1){
            ans=0;
        }

        cout << ans << endl;
    }
}