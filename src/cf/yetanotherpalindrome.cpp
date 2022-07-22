#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        string a,e,o;
        cin>>a;

        for (int i = 1; i < t; i=i+2)
        {
            e+=a[i];
        }
        for (int i = 0; i < t; i=i+2)
        {
            o+=a[i];
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        if(e==o){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
}