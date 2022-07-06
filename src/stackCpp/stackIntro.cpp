#include <bits/stdc++.h>
using namespace std;
bool balanced(string& str){
    stack<int>s;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(s.empty())
                return false;
            else if(str[i] == ')' && s.top() == '(')
                s.pop();
            else if(str[i] == '}' && s.top() == '{')
                s.pop();
            else if(str[i] == ']' && s.top() == '[')
                s.pop();
            else
                return false;
        }
    }
    return s.empty();
}




int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    cout<<st.top()<<endl;
}