#include <bits/stdc++.h>
using namespace std;
bool equalArray(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    if (a.size() != b.size())
    {
        return false;
    }
    unordered_map<int, int> mp;
    for (auto it : a)
    {
        mp[it]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(b[i]) == mp.end())
        {
            return false;
        }
        if (mp[b[i]] == 0)
        {
            return false;
        }
        mp[b[i]]--;
    }
    return true;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << equalArray(a, b);
}