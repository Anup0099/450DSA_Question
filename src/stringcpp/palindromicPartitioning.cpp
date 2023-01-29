#include <bits/stdc++.h>
using namespace std;
int n;
bool isPalindrome(string &s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
void backtrack(string &s, int index, vector<string> &curr, vector<vector<string>> &result)
{

    if (index == n)
    {
        result.push_back(curr);
        return;
    }

    for (int i = index; i < n; i++)
    {
        if (isPalindrome(s, index, i))
        {
            curr.push_back(s.substr(index, i = index + 1));
            bcktrack(s, index + 1, curr, result);
            curr.pop_back();
        }
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>> result;
    vector<string> curr;
    backtrack(s, 0, curr, result);
    return result;
}
int main() {}