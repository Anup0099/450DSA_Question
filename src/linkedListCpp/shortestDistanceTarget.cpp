#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed circular string array words and a string target. A circular array means that the array's end connects to the array's beginning.

// Formally, the next element of words[i] is words[(i + 1) % n] and the previous element of words[i] is words[(i - 1 + n) % n], where n is the length of words.
// Starting from startIndex, you can move to either the next word or the previous word with 1 step at a time.

// Return the shortest distance needed to reach the string target. If the string target does not exist in words, return -1.

int closetTarget(vector<string> &words, string target, int startIndex)
{
    int n = words.size();
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (words[i] == target)
        {
            ans = min(ans, min(abs(i - startIndex), n - abs(i - startIndex)));
        }
    }
    return ans == INT_MAX ? -1 : ans;
}

int main() {
    vector<string> words = {"hello","i","am","leetcode","hello"};
    string target = "hello";
    int startIndex = 1;
    cout << closetTarget(words, target, startIndex);
    return 0;
}