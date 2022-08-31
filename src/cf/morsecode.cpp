#include <bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string> &words)
{
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> st;
    for (int i = 0; i < words.size(); i++)
    {
        string s = "";
        for (int j = 0; j < words[i].size(); j++)
        {
            s += morse[words[i][j] - 'a'];
        }
        st.insert(s);
    }
    return st.size();
}
int main() {}