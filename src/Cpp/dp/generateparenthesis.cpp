#include <bits/stdc++.h>
#define ll long long
#define fastio  
using namespace std;
vector<string>valid;
void solve(string &s,int open,int close){
    if(open==0 && close==0){
        valid.push_back(s);
        return;
    }
    if(open>0){
        s.push_back('(');
        solve(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(open<close){
            s.push_back(')');
            solve(s,open,close-1);
            s.pop_back();
        }
    }

}


  vector<string> generateParenthesis(int n) {
        vector<string>v;
        string s;cin>>s;
        int open,close;cin>>open>>close;

        solve( s, open , close);

    }
int main(){

}