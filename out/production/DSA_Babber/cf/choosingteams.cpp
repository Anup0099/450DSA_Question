#include <bits/stdc++.h>
using namespace std;

 
int main(){
    // int n,k;cin>>n>>k;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // } 
    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(abs(a[i]-k)==k || abs(a[i]-k)>k){
    //         count++;
    //     }
    // }
    // int ans=0;
    // if(count>=3){
    //     ans=count/3;
    // }
    // else{
    //     ans=0;
    // }
    // cout<<ans<<endl;
    int n,k;cin>>n>>k;
    int ans=0;
    while (n--)
    {
        if(n+k<=5){
            ans++;
        }
        cout<<ans/3<<endl;
    }
    

}
