#include <bits/stdc++.h>
using namespace std;
int totaFuits(vector<int> &fruits)
{
    set<int> s;
    for (int i : fruits)
    {
        s.insert(i);
    }
    if (s.size() <= 2)
    {
        return fruits.size();
    }
    fruits.push_back(1000001);
    vector<int> f(1000001);
    int total = 0;
    int j = 0;
    int maxi = 0;
    for (int i = 0; i < fruits.size(); i++)
    {
        if (f[fruits[i]] == 0 and total == 2)
        {
            maxi = max(maxi, i - j);
            while (j < i)
            {
                if (f[fruits[j]] > 1)
                {
                    f[fruits[j]]--;
                    j++;
                }
                else if (f[fruits[j]] == 1)
                {
                    f[fruits[j]]--;
                    j++;
                    total--;
                    break;
                }
            }
            f[fruits[i]]++;
        }
        else if (f[fruits[i]] == 0 and total < 2)
        {
            f[fruits[i]]++;
            total++;
        }
        else
        {
            f[fruits[i]]++;
        }
    }
    return maxi;
}
int main() {}