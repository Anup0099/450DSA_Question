#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupanagrams(vector<string> &strs)
{
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;
    for (int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(), s.end());
        mp[s].push_back(strs[i]);
    }
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    for (auto it : mp)
    {
        for (auto i : it.second)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return ans;
}
// You are given a 0-indexed string array words, where words[i] consists of lowercase English letters.

// In one operation, select any index i such that 0 < i < words.length and words[i - 1] and words[i] are anagrams, and delete words[i] from words. Keep performing this operation as long as you can select an index that satisfies the conditions.

// Return words after performing all operations. It can be shown that selecting the indices for each operation in any arbitrary order will lead to the same result.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase using all the original letters exactly once. For example, "dacb" is an anagram of "abdc".
vector<string> removeAnagrams(vector<string> &words)
{
    vector<string> ans;
    unordered_map<string, int> mp;
    for (int i = 0; i < words.size(); i++)
    {
        string s = words[i];
        sort(s.begin(), s.end());
        mp[s]++;
    }
    for (int i = 0; i < words.size(); i++)
    {
        string s = words[i];
        sort(s.begin(), s.end());
        if (mp[s] == 1)
        {
            ans.push_back(words[i]);
        }
    }
    return ans;
}
int main()
{
    vector<string> words = {"tan", "ate", "nat", "bat", "tea", "tab", "eat", "tea"};
    vector<vector<string>> ans = groupanagrams(words);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}