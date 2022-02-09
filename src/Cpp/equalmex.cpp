#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
            int n;
            cin>>n;
            int arr[n];
            map<int ,int>mapp;
            for (size_t i = 0; i < n*2; i++)
            {
                cin>>arr[i];
                mapp[i]++;
            }
            for (size_t i = 0; i < mapp.size(); i++)
            {
                if(mapp[i]==0){
                    cout<<"yes"<<endl;
                    
                }
                
            }
            
            
    }
    
}