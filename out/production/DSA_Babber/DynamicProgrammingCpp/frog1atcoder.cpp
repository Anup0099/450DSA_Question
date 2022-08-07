#include <bits/stdc++.h> 
using namespace std;
int arr[1000005],dp[1000005];
int func(int ind){
    int k=0;
    if(ind==n)return 0;
    int mini=1e10;
    for(int i=ind+1;i<=min(n,ind+k);i++){
        mini=min(mini,abs(arr[i]-arr[ind]))+func(i);
    }
    return mini;
}
// int func(int ind){

//     if(ind==n)return 0;
//     if(dp[ind]!=-1)return dp[ind];
//     int min=1e10;
//     for(int i=ind+1;i<=min(n,ind+k);i++){
//         min=min(min,abs(arr[i]-arr[ind]))+func(i);
//     }
//     return dp[ind]=min;
// }
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int n,k;
    // cin>>n>>k;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // memset(dp,-1,sizeof(dp));
    // cout<<func(1)<<endl;
    // return 0;
    cout<<"enter the number of elements"<<endl;
}  