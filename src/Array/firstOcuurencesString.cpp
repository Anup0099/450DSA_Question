#include <bits/stdc++.h> 
using namespace std;
string firstRepeated(string s){
    vector<int>f(26,0);
    int n=s.size();
    string ans;
    for(int i=0;i<n;i++){
        f[s[i]-'a']++;
        if(f[s[i]-'a']>1){
            ans.push_back(s[i]);
            return ans;
        }
    }
    for(int i=0;i<f.size();i++){
        cout<<f[i];
    }
   cout<<ans<<endl;
    return "-1";
}
int main() {
    string s="geeksforgeeks";
    cout<<firstRepeated(s);
} 