#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main()
{
    
    int n,m;cin>>n>>m;
    int ini=1;
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        ans+=((x-ini+n)%n);
        ini=x;
    }
    cout<<ans<<"\n";
    return 0;
}