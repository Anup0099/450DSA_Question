#include <bits/stdc++.h> 
using namespace std; 
int main() {
   int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++)cin>>b[i];

    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
        sum2+=b[i];
    }
    sum2 = sum2+k;
    int ans=sum2/sum1;
    cout<<ans<<endl;

} 