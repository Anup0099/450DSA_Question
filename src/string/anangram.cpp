#include <bits/stdc++.h>
using namespace std;


int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}