#include <bits/stdc++.h>
using namespace std;
vector<string> allSubstrings(string s)
{
    vector<string> ans;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j <= s.size(); j++)
        {
            ans.push_back(s.substr(i, j));
        }
    }
    return ans;
}
int minimumParttiton(string s, int k)
{
    

    return 0;
}
int main()
{
    string s = "123";
    vector<string> ans = allSubstrings(s);
    for (auto i : ans)
    {
        cout << i << endl;
    }
}