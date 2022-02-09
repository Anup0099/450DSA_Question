#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;
const int t=1e5+10;
long long  fact[t];
int main(){
    fact[0]=fact[1]=1;
    for (size_t i = 2; i < t; i++)
    {
        fact[i] = fact[i-1]*i;
    }
    
    int n;cin>>n;
    while(n--){
        int a;cin>>a;
        cout<<fact[a]<<endl;
        

    }
}