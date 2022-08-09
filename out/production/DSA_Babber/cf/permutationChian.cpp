#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
            cout<<i+1<<endl;
        }
        int i=0,j=n-1;
        while(i<j){
            swap(v[i],v[j]);
            i++;
            for(auto x:v){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    
} 