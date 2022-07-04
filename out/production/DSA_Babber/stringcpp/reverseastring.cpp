#include <bits/stdc++.h>
using namespace std;


string reverse(string &s)
{
    
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<reverse(s);
    return 0;
}