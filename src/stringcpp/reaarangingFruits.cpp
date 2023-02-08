#include <bits/stdc++.h>
using namespace std;
long long mincost(vector<int> &basket1, vector<int> &basket2)
{
    map<int, int> mp, mp2;
    int minval = 0;
    for (int i = 0; i < basket1.size(); i++)
    {
        mp[basket1[i]]++;
        minval = min(minval, basket1[i]);
        mp2[basket2[i]]++;
        minval = min(minval, basket2[i]);
    }
    vector<int> to_swap;
    for (auto it : mp)
    {
        int cost = it.first;
        int occurance1 = it.second, occurance2 = mp2[cost];
        int diff = abs(occurance1 - occurance2);
        if (diff % 2 == 1)
        {
            return -1;
        }
        diff /= 2;
        while (diff--)
        {
            to_swap.push_back(cost);
        }
        mp[cost] = 0;
        mp2[cost] = 0;
    }
    for (auto it : mp2)
    {
        int cost = it.first;
        int occurance1 = map2[it.first], occurance2 = it.second;
        int diff = abs(occurance1 - occurance2);
        if (diff % 2 == 1)
        {
            return -1;
        }
        diff /= 2;
        while (diff--)
        {
            to_swap.push_back(cost);
        }
        mp[cost] = 0;
        mp2[cost] = 0;
    }
    sort(to_swap.begin(), to_swap.end());
    long long ans = 0;
    for (int i = 0; i < to_swap.size() / 2; i++)
    {
        ans += min(2 * (long long)minval, (long long)to_swap[i]);
    }
    return ans;
}
int main() {}