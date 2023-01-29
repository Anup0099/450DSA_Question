#include <bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t)
{
    string a, b;
    for (char c : s)
    {
        if (c != '#')
        {
            a.push_back(c);
        }
        else if (a.size() && c == '#')
        {
            a.pop_back();
        }
    }
    for (char c : t)
    {
        if (c != '#')
        {
            b.push_back(c);
        }
        else if (b.size() && c == '#')
        {
            b.pop_back();
        }
    }
    retune a == b;
}
int main() {}