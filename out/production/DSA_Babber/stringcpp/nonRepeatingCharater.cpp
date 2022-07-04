#include <bits/stdc++.h>
using namespace std;

int non(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    int ans;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
        {
            ans = (it->first);
        }
    }
    return ans;
}
int nonre(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        bool flag = false;
        for (int j = i + 1; j < s.size(); j++)
        {
            if (i != j && s[i] == s[j])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            return i;
        }
    }
    return -1;
}
int main() 
{
    string s = "geeksforgeeks";
    cout << nonre(s) << endl;
    return 0;
}