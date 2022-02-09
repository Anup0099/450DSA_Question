#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int ans1 = x-n-1;
        
        if(n>=x){
            cout<<x<<endl;
        }else {
            while (ans1>n)
            {
                ans1 = ans1-n-1;
            }
            cout<<ans1<<endl;
            

        }
        

    }
    
}