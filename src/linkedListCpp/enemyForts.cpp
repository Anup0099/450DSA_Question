#include <bits/stdc++.h>
using namespace std;
int captureForts(vector<int> &forts)
{
    int ans = 0, i, n = forts.size(), last, def = -2, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (forts[i] == 0)
        {
            sum++;
        }
        else if (forts[i] == -1)
        {
            if (def == 1)
            {
                ans = max(ans, sum);
                def = -1;
            }
            else
            {
                def = -1;
            }
            sum = 0;
        }
        else
        {
            if (def == -1)
            {
                ans = max(ans, sum);
                def = 1;
            }
            else
            {
                def = 1;
            }
            sum = 0;
        }
    }
    return ans;
}

int main() {}