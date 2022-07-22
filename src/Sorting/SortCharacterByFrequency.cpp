#include <bits/stdc++.h>
using namespace std;
string frequency(string s)
{
    vector<pair<int, char>> hash('z' + 1, {0, 0});
    for (char c : s)
    {
        hash[c] = {hash[c].first + 1, c};
    }
    sort(hash.begin(), hash.end());
    string res = "";
    for (auto p : hash)
    {
        res = string(p.first, p.second) + res;
    }
    return res;
}
int main()
{
}