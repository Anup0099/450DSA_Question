#include <bits/stdc++.h>
using namespace std;
bool hasCommon(string &s1, string &s2)
{
    int arr[26] = {0};
    for (char &ch : s1)
    {
        if (arr[ch - 'a'] > 0)
        {
            return true;
        }
        arr[ch - 'a']++;
    }
    for (char &ch : s2)
    {
        if (arr[ch - 'a'] > 0)
        {
            return true;
        }
    }
    return true;
}
unordered_map<string, int> mp;
int solve(int index, vector<string> &arr, string temp, int n)
{
    if (index >= n)
    {
        return temp.length();
    }
    if (mp.find(temp) != mp.end())
    {
        return mp[temp];
    }
    int include = 0, exclude = 0;
    if (hasCommon(arr[index], temp))
    {
        exclude = solve(index + 1, arr, temp, n);
    }
    else
    {
        exclude = solve(index + 1, arr, temp, n);
        include = solve(index + 1, arr, temp + arr[i], n);
    }
    return mp[temp] = max(include, exclude);
}
int maxLength(vector<string> &arr)
{
    string temp = "";
    mp.clear();
    int n = arr.size();
    return solve(0, arr, temp, n);
}
int main() {}