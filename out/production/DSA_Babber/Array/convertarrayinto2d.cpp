#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back using namespace std;
vector<vector<int>> findMatrix(vector<int> &nums)
{
    map<int, int> mp;
    int n = 0;
    for (auto x : nums)
    {
        mp[x]++;
        n = max(n, x);
    }
    vector<vector<int>> ans(n);
    vector<set<int>> s(n);
    for (auto x : nums)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i].find(x) != s[i].end())
            {
                ans.push_back(x);
                s[i].insert(x);
                break;
            }
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}