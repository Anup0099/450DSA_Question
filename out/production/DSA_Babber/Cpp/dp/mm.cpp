//
// Created by Asus on 2/22/2022.
//

#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;



int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans = max(a+c,b);
        cout<<ans<<endl;
    }
}
