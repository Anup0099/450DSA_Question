#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        string pi = "314159265358979323846264338327";
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != pi[i])
            {
                break;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
}