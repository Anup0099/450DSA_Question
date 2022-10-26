#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int n = s.length();
    int res = 0;
        set<char> st;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (st.find(s[j]) != st.end())
            {
                break;
            }
            else
            {
                st.insert(s[j]);
                res = max(res, j - i + 1);
            }
        }
    }
    for(auto it:st){
        cout<<it<<" ";
    }
    return res;
}
int main() {
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}