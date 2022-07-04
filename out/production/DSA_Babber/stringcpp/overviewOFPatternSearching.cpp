#include <bits/stdc++.h>
using namespace std;
void patterSearch(string &text, string &pat)
{
    int n = text.size();
    int m = pat.size();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != text[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main()
{
    string text = "GEEKSFORGEEKS";
    string pat = "GEEK";
    patterSearch(text, pat);
    return 0;
}