#include <bits/stdc++.h>
using namespace std;
string removeDuplicateLetters(string s)
{

    unordered_set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.insert(s[i]);
    }
    string ans = "";
    for (auto it : st)
    {
        ans += it;
    }
    // sort(ans.begin(), ans.end());
    return ans;
}
int main() {
    string s = "cbacdcbc";
    cout << removeDuplicateLetters(s);
}