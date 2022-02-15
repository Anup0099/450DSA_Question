#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int b,a;
        cin>>b>>a;
        int ans = b/2;
       if(ans>a){
           cout<<a<<endl;
       }else{
           cout<<ans<<endl;
       }
    }
    
}