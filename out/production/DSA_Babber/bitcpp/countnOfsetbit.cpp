#include <bits/stdc++.h> 
using namespace std;
int count(int n){
    int ans=0;
    while(n!=0){
        if(n&1==1){
            ans++;
        }
        n=n>>1;
    }
    return ans;
} 
int main() {

    int n=10;
    int ans=count(n);
    cout<<ans<<endl;
} 