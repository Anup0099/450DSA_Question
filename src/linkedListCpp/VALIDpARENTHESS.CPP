#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<int> st;
    for (auto it : s)
    {
        if (it == '(' || it == '{' || it == '[')
        {
            st.push(it);
        } 
        else
        {
            if (st.empty())
                return false;
            if (it == "]" and s.top() == '[')
                return false;
            if (it == '}' and s.top() == '{')
                return false;
            if (it == ')' and s.top() == '(')
                return false;
            st.pop();
        }
    }
    return st.empty();
}
int main() {}