#include <bits/stdc++.h> 
using namespace std;
//bitonic sequence
int n;
int arr[100000];
int A=8;
int check(int x)
{
    return arr[x] >arr[x-1];
} 
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=1;
    int hi=n-1;
    int ans=0;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(check(mid)){
            ans=mid;
            lo=mid+1;
        }
        else{

            hi=mid-1;
        }
    }
    cout<<ans<<endl;
}
int main() {
    solve();
    
} 
