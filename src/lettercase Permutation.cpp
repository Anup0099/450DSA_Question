#include <bits/stdc++.h>
using namespace std;
void solve(string ip,sring op,vector<string>&ans){
    if(ip.length()==0){
        ans.push_back(op);
        return;
    }
    if(isdigit(ip[0])){
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op,ans);
    }
    else{
        string op1=op;
        string op2=op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        solve(ip,op1,ans);
        solve(ip,op2,ans);
    }
}
vector<string> letterCasePermutation(string s)
{
    vector<string> ans;
    string ip = s;
    string op = "";
    solve(ip, op, ans);
}
int main()
{
    string s = "a1b2";
    vector<int> ans = letterCasePermutation(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}