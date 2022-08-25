#include <bits/stdc++.h>
using namespace std;
bool checkIfPangram(string s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    if (m.size() == 26)
    {
        return true;
    }
    return false;
}
int main() {
    string s="NAup";
    cout<<checkIfPangram(s)<<endl;
}