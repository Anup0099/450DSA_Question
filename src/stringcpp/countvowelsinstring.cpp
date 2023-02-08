#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed array of strings words and a 2D array of integers queries.

// Each query queries[i] = [li, ri] asks us to find the number of strings present in the range li to ri (both inclusive) of words that start and end with a vowel.

// Return an array ans of size queries.length, where ans[i] is the answer to the ith query.

// Note that the vowel letters are 'a', 'e', 'i', 'o', and 'u'.
vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
{
    //optimized o(logn) solution
    vector<int> ans;
    vector<int> vowels(26, 0);
    vowels['a' - 'a'] = 1;
    vowels['e' - 'a'] = 1;
    vowels['i' - 'a'] = 1;
    vowels['o' - 'a'] = 1;
    vowels['u' - 'a'] = 1;
    vector<int> prefix(words.size() + 1, 0);
    for (int i = 0; i < words.size(); i++)
    {
        prefix[i + 1] = prefix[i] + vowels[words[i][0] - 'a'] * vowels[words[i][words[i].size() - 1] - 'a'];
    }
    for (int i = 0; i < queries.size(); i++)
    {
        ans.push_back(prefix[queries[i][1] + 1] - prefix[queries[i][0]]);
    }
    return ans;
}
int main() {}