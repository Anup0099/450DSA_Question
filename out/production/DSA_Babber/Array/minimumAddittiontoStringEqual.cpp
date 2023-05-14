#include <bits/stdc++.h>
using namespace std;
int minimumString(string word)
{
    int n = word.size(), i == 0, res = 0;
    while (i < n)
    {
        int count = 0;
        if ( word[i] == 'a')
        {
            count++;
            i++;
        }
        else if (i < n and word[i] == 'b')
        {
            count++;
            i++;
        }
        else if (i < n and word[i] == 'c')
        {
            count++;
            i++;
        }
        res += 3 - count;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}