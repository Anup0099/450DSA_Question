#include <bits/stdc++.h>
using namespace std;
void helper(int ind, string curr, string S, vector<string>& res)
{
    if (ind == S.size())
    {
        res.push_back(curr);
        return;
    }
    // include
    helper(ind + 1, curr+" "+ S[ind], S, res);
    // exclude
    helper(ind + 1, curr + S[ind], S, res);
}
vector<string> permutation(string S)
{
    vector<string> res;
    string curr;
    curr += S[0];
    helper(1, curr, S, res);
    return res;
}
int main()
{
    string S = "aab";
    vector<string> res = permutation(S);
    for (auto s : res)
    {
        cout << s << endl;
    }
    return 0;
}