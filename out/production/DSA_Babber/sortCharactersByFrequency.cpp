#include <bits/stdc++.h>
using namespace std;
bool comparater(vector<int> &a, vector<int> &b)
{
    return b[0] < a[0];
}
string characterBYFrequency(string s)
{
    int n = s.length();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    vector<pair<char,int >> ans; 
    for (auto it : mp)
    {
        ans.push_back({it.first, it.second});
    }
    sort(ans.begin(), ans.end(), comparater);
    string res = "";
    for (auto it : ans)
    {
        int count = it[0];
        while (count--)
        {
            res += it[1];
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}