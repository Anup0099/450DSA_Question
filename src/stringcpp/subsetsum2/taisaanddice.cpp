#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, s, r, i, j, val;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>s>>r;
        
        val=s-r;
        
        cout<<val<<" ";
        
        j=1;
        
        for(j=2;j<=n;j++){
            while(r-val<n-j){
                val--;
            }
            cout<<val<<" ";
            r=r-val;
        }
        
        cout<<"\n";
    }
}