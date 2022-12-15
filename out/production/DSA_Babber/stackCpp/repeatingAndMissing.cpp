#include <bits/stdc++.h>
using namespace std;
vector<int> mis(vector<int> &v)
{
    int n = v.size();
    vector<int> ans(n + 1);
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            ans.push_back(v[i] + 1);
            ans.push_back(v[i]);
        }
    }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    return ans;
}
bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string s1 = "", s2 = "";
    for (int i = 0; i < word1.size(); i++)
    {
        s1 += word1[i];
    }
    for (int i = 0; i < word2.size(); i++)
    {
        s2 += word2[i];
    }
    if (s1 == s2)
    {
        return true;
    }
    return false;
}
int main()
{
    vector<int> v = {3, 1, 2, 5, 3};
    vector<int> ans = mis(v);
    return 0;
}