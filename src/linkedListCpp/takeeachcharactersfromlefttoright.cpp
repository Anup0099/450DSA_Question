#include <bits/stdc++.h>
using namespace std;
int takeCharacters(string s, int k)
{
    int ans, n = s.size(), i, j, c, ca, cb, cc;
    ans = -1;

    unordered_map<int, int> mp_a, mp_b, mp_c;
    mp_a[0] = mp_b[0] = mp_c[0] = n;
    c = 0;

    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
        {
            c++;
            mp_a[c] = i;
        }
    }

    c = 0;

    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            c++;
            mp_b[c] = i;
        }
    }

    c = 0;

    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'c')
        {
            c++;
            mp_c[c] = i;
        }
    }

    if (k == 0)
    {
        return 0;
    }
    if (mp_a.find(k) == mp_a.end() || mp_b.find(k) == mp_b.end() || mp_c.find(k) == mp_c.end())
    {
        return -1;
    }

    ca = cb = cc = 0;
    ans = n - min(mp_a[max(0, k - ca)], min(mp_b[max(0, k - cb)], mp_c[max(0, k - cc)]));
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a')
        {
            ca++;
        }
        else if (s[i] == 'b')
        {
            cb++;
        }
        else if (s[i] == 'c')
        {
            cc++;
        }

        ans = min(ans, i + 1 + n - min(mp_a[max(0, k - ca)], min(mp_b[max(0, k - cb)], mp_c[max(0, k - cc)])));
    }

    return ans;
}
int main() {}