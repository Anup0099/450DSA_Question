#include <bits/stdc++.h>
using namespace std;
//check for palindrome  here recusion is just iterator to next index
//line 6 checks for palindrome and if it is palindrome then it returns true else it returns false   and it is called recursively
bool f(int i,string &s, int n){
    if(i>n/2)return true;
    if(s[i]!=s[n-i-1]){
        return false;
    }
   return f(i+1,s,n);
}

int main(){
    string s = "madam";
    cout<<f(0,s,s.length())<<endl;
}