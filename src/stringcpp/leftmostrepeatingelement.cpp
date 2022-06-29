#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
int leftmost(string s)
{
    int n = s.size();
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int left(string s)
{
    int count[CHAR] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }
    for (int i = 0; i < CHAR; i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string s = "abccdb";
    cout << left(s) << endl;
    return 0;
}