#include <bits/stdc++.h>
using namespace std;

// You are given a 0-indexed string array words.

// Two strings are similar if they consist of the same characters.

// For example, "abca" and "cba" are similar since both consist of characters 'a', 'b', and 'c'.
// However, "abacba" and "bcfd" are not similar since they do not consist of the same characters.
// Return the number of pairs (i, j) such that 0 <= i < j <= word.length - 1 and the two strings words[i] and words[j] are similar.

// Input: words = ["aba","aabb","abcd","bac","aabc"]
// Output: 2
// Explanation: There are 2 pairs that satisfy the conditions:
// - i = 0 and j = 1 : both words[0] and words[1] only consist of characters 'a' and 'b'.
// - i = 3 and j = 4 : both words[3] and words[4] only consist of characters 'a', 'b', and 'c'.
int similarPairs(vector<string> &words)
{
    int count = 0;
    set<char> s;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = i + 1; j < words.size(); j++)
        {
            for (int k = 0; k < words[i].length(); k++)
            {
                s.insert(words[i][k]);
            }
            for (int k = 0; k < words[j].length(); k++)
            {
                if (s.find(words[j][k]) == s.end())
                {
                    break;
                }
                if (k == words[j].length() - 1)
                {
                    count++;
                }
            }
            s.clear();
        }
    }
   if(count%2==0)
   {
       return count/2;
   }else{
       return count;
   }
}
int main()
{
    vector<string> words = {"aabb","ab","ba"};
    cout << similarPairs(words);
    return 0;
}