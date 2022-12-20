#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
// print all the palindromic substrings
int print(int ind, string s)
{
    int count = 0;
    if (ind == s.size())
    {
        return 0;
    }
    int take = print(ind + 1, s);
    string s1 = s.substr(ind, s.size() - ind);
    if (isPalindrome(s1))
    {
        count++;
    }
    int notTake = print(ind + 1, s);
    return count + take + notTake;
}
int countSubstring(string s)
{
    vector<int> vec;
    int ans = print(0, s);
    return ans;
}
int countSubstrings(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            string s1 = s.substr(i, j - i + 1);
            if (isPalindrome(s1))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string s = "abc";
    cout << countSubstring(s);
}