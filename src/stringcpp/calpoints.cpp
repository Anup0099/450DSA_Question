#include <bits/stdc++.h>
using namespace std;
int calPoints(vector<string> &ops)
{
    int value1;
    int value2;
    int ans = 0;
    stack<int> st;
    for (string i : ops)
    {
        if (i == 'C')
        {
            st.pop();
        }
        else if (i == 'D')
        {
            st.push(st.top() * 2);
        }
        else if (i == "+")
        {
            value1 = st.top();
            st.pop();
            value2 = st.top();
            st.push(value1);
            st.push(value1 + value2);
        }
        else
        {
            st.push(stoi(i));
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main() {}