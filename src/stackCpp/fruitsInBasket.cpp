#include <bits/stdc++.h>
using namespace std;
int totalFruit(vector<int> tree)
{
    set<int> s;
    int n = tree.size();
    if (s.size() >= 2)
        return n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            s.insert(tree[j]);
            if (s.size() <= 2)
            {
                ans = max(ans, j - i + 1);
            }
            else
            {
                break;
            }
        }
        s.clear();
    }
    return ans;
}
int totalFruit(vector<int> &fruits)
{
    int lastFruit = -1;
    int secondlastFruit = -1;
    int currentMax = 0;
    int maxi = 0;
    int last_fruit_count = 0;
    for (auto nums : fruits)
    {
        if (nums == lastFruit || nums == secondlastFruit)
        {
            currentMax += 1;
        }
        else
        {
            currentMax = lastFruit + 1;
        }
        if (nums == lastFruit)
        {
            lastFruit+=1;
        }
        else
        {
            lastFruit = 1;
        }
        if (nums != lastFruit)
        {
            secondlastFruit = lastFruit;
            lastFruit = nums;
        }
        maxi = max(currentMax, maxi);
    }
    return max;
}
int main() {}