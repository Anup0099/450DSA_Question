#include <bits/stdc++.h>
using namespace std;
int secondsToRemoveOccurrences(string s)
{
    int t = 0;
    int n = s.size();
    if (n == 1)
        return 0;
    while (true)
    {
        bool flag = false;
        int i = 1;
        while (i < n)
        {
            if (s[i] == '1' && s[i - 1] == '0')
            {
                s[i] = '0';
                s[i - 1] = '1';
                i=i+2;
                flag = true;
            }
            else i++;
        }
        if (!flag)
            break;
        t++;
    }
    return t;
}

int main() {}