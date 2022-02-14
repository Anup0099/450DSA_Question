#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;


int main(){
    int t;cin>>t;
    while (t--)
    {
        int zeroes =0;
        int ones =0;
        string s;
        cin>>s;
        for (size_t i = 0; i < s.length(); i++)
        {
            if(s[i]=='0'){
                zeroes++;

            }else if(s[i]=='1'){
                ones++;
            }
            
        }
        if(zeroes==ones){
            cout<<min(zeroes,ones)-1<<endl;
        }else{
            cout<<min(zeroes,ones)<<endl;
        }
        
    }
    
    return 0;
}