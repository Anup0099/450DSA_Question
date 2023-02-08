#include <bits/stdc++.h>
using namespace std;
string gcdOfStrings(string s1, string s2)
{
    set<string> s;
    int length1 = s1.length();
    int length2 = s2.length();
    if (s1 + s2 == s1 + s2)
    {
        return s1.substr(0, gcd(size(s1), size(s2)));
    }
    else
    {
        return " ";
    }
}
int main() {}