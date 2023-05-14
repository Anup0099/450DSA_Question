#include <bits/stdc++.h>
using namespace std;
// Given a string word to which you can insert letters "a", "b" or "c" anywhere and any number of times, return the minimum number of letters that must be inserted so that word becomes valid.

// A string is called valid if it can be formed by concatenating the string "abc" several times.
int addMinimum(string word)
{
    int n = word.size();
    int ans = 0;
    int count = 0;
    if (word == "abc")
    {
        return 0;
    }
    



    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;
    cout << addMinimum(word);
}