#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
string firstPalindrome(vector<string> &words)
{
    string ans = "";
    for (int i = 0; i < words.size(); i++)
    {
        if (isPalindrome(words[i]))
        {
            ans = words[i];
            break;
        }
    }
    return ans;
}
int main()
{
}