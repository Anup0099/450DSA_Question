#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
bool checkangram(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
bool anagram(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    
}