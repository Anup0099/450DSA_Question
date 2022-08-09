#include <bits/stdc++.h>
using namespace std;
void helper(string s, int ind, int n, vector<string>&res)
{
    if (ind == n-1)

    {
        res.push_back(s);
        return;
    }
    for (int i = ind; i < n; i++)
    {
        swap(s[ind], s[i]);
        helper(s, ind + 1, n, res);
        swap(s[ind], s[i]);
    }
}
vector<string> permutation(string s)
{
    vector<string> res;
    
   helper(s, 0, s.size(), res);
   sort(res.begin(), res.end());
   
    return res;
}
int main()
{
    string s = "abc";
    vector<string> res = permutation(s);
    for (auto x : res)
    {
        cout << x << endl;
    }
}
