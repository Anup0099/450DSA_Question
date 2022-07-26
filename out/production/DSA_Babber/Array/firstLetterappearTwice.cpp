#include <bits/stdc++.h>
using namespace std;
//Given a string s consisting of lowercase English letters, return the first letter to appear twice.
char repeatedCharacter(string s)
{
    unordered_map<char, int> m;
    for (char c : s)
    {
        if (m[c] == 1)
            return c;
        m[c]++;
    }
    return ' ';
}
int main()
{   
    string s = "abcdd";
    cout << repeatedCharacter(s) << endl;
    return 0;
}