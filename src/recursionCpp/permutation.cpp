#include <bits/stdc++.h>
using namespace std;

void peermute(string s,int i=0){
    if(i==s.length()){
        cout<<s<<endl;
        return;
    }
    for(int j=i;j<=s.length();j++){
        swap(s[i],s[j]);
        // cout<<s<<endl;
        peermute(s,i+1);
        // cout<<s<<endl;
        swap(s[i],s[j]);
    }
}
int main(){
    string s="abc";
    peermute(s);
    return 0;

}