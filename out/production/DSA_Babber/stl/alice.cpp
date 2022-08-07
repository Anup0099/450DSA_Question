#include <bits/stdc++.h> 
using namespace std; 
// int main() {
//     int t;cin>>t;
//     while(t--){

//         int n;cin>>n;
//         cout<<100-n<<endl;

//     }
// } 

int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
       vector<int> v;
        
        for(int i=0;i<n;i++){
          v.push_back(i);
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
          cout<<next_permutation(v.begin(),v.end())<<endl;

    }
}