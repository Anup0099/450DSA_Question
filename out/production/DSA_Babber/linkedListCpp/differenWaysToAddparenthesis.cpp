#include <bits/stdc++.h>
using namespace std;
vector<int> diffWaysToCompute(string expression)
{
    vector<int> v;
    return v;
}
int main()
{
    // character frequency array
    string s = "abc";
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << freq[i] << " ";
    }
}