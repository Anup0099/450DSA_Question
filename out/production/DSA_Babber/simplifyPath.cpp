#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back using namespace std;
string simplifyPath(string path)
{
    string token = "";
    stringStream ss(path);
    stack<int> st;
    while (getline(ss, token, '/'))
    {
        if (token == "" || token == ".")
            continue;
        if (token != "..")
        {
            st.push(token);
        }else{
            st.pop();
        }
    }
    if(st.empty()){
        return "/";
    }
    string ans="";
    while(!st.empty()){
        ans = "/" + st.top() + ans;
        st.pop();
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}