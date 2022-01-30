#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        if(n>1 && k==1)cout<<-1<<endl;
        continue;

        vector<int >v(n);
        iota(v.begin(),v.end(),1);
        reverse(v.end()-(n-k+1),v.end());
        for(int x:v){
            cout<<x<<" ";
        }
        cout<<endl;


    }
    return 0;
}