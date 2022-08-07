#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v;
        for(int i=1;i<=n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        unordered_set<int> s;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s.find(v[i])!=s.end()){
                
                ans=i+1;
                break;
            }
            s.insert(v[i]);
        }
        cout<<ans<<endl;
            
        

    }
} 