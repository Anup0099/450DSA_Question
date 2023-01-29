#include <bits/stdc++.h>
using namespace std;
bool isConcatenated(string word, unordered_set<string> &st)
{
    int l = word.length();
    for (int i = 0; i < l; i++)
    {
        string prefix = word.substr(0, i + 1);
        string suffix = word.substr(i + 1);

        if (st.find(prefix) != st.end() && isConcatenated(suffix, st) || st.find(suffix) != st.end() && st.find(prefix) != st.end())
        {
            return true;
        }
    }
    return flase;
}

vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
{
    int n = words.size();
    unordered_set<string> st(begin(words), end(words));
    vector<string> result;
    for (int i = 0; i < n; i++)
    {
        string word = words[i];
        if (isConcatenated(word, st))
        {
            result.push_back(word);
        }
    }
    return result;
}
int main() {}