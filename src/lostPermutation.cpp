#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, i, j, m, s, ma;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>m>>s;
        
        ll b[m];
        unordered_map<ll, bool> mp;
        ma=0;
        for(i=0; i<m; i++){
            cin>>b[i];
            mp[b[i]]=true;
            ma=max(ma, b[i]);
        }
        
        
        ll p=1;
        
        while(s>0)
        {
            while(mp[p]==true){
                p++;
            }
            ma=max(ma, p);
            s=s-p;
            mp[p]=true;
        }
        
        if(s==0 && mp.size()==ma)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    
    
}