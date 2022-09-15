#include <bits/stdc++.h> 
using namespace std; 
int main() {
    string str;cin>>str;
    int n=str.length();
    vector<string>v(n);
    for(int i=0; i<n; i++){
        v[i]=str[i];
    }
   
    cout<<v[(n)/2]<<endl;
    
    
} 