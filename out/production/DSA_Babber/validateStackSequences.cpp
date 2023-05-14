#include <bits/stdc++.h>

using namespace std;
bool validateStackSequences(vector<int> pushed, vector<int> popped)
{
    stack<int> st;
    int n = pushed.size(), m = popped.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        st.push(pushed[i]);
        while (!st.empty() &&  popped[j] == st.top())
        {
            st.pop();
            j++;
        }
        i++;
    }
    return st.empty();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}