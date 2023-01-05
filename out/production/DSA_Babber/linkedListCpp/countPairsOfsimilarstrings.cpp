#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed string array words.

// Two strings are similar if they consist of the same characters.

// For example, "abca" and "cba" are similar since both consist of characters 'a', 'b', and 'c'.
// However, "abacba" and "bcfd" are not similar since they do not consist of the same characters.
// Return the number of pairs (i, j) such that 0 <= i < j <= word.length - 1 and the two strings words[i] and words[j] are similar.

bool check(string a, string b)
{
    int n = a.length();
    int m = b.length();
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    set<int> t;
    for (int i = 0; i < m; i++)
    {
        t.insert(b[i]);
    }
    if (s == t)
    {
        return true;
    }
    return false;
}
int similarPairs(vector<string> &words)
{
    int n = words.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (check(words[i], words[j]))
            {
                count++;
            }
        }
    }
    return count;
}
int similarPairs(vector<string> &words)
{

    int count = 0;
    map<string, int> m;
    for (int i = 0; i < words.size(); i++)
    {
        set<char> s;
        for (int j = 0; j < words[i].length(); j++)
        {
            s.insert(words[i][j]);
        }
        string temp = "";
        for (auto it = s.begin(); it != s.end(); it++)
        {
            temp += *it;
        }
        m[temp]++;
    }
    for (auto it : m)
    {
        int y = (it.second - 1) * (it.second) / 2;
        count += y;
    }
    return count;
}
int main()
{
    string a, b;
    a = "aba";
    b = "aabb";
    vector<string> words = {"aba", "aabb", "abcd", "bac", "aabc"};
    cout << similarPairs(words);
}