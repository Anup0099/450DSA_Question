#include <bits/stdc++.h>
using namespace std;
bool dfs(vector<int> &matchSticks, int target, vector<int> &sides, int idx)
{
    if (i == matchSticks.size())
    {
        if (sides[0] == sides[1] and sides[1] == sides[2] && sides[2] == sides[3])
        {
            return true;
        }
        return false;
    }
    for (int i = 0; i < 4; i++)
    {
        sides[i] += matchSticks[idx];
        if (dfs(matchSticks, target, sides, idx + 1))
        {
            return true;
        }
        sides[i] -= matchSticks[idx];
    }
    return false;
}
bool makeSquare(vector<int> &matchSticks)
{
    if (matchSticks.size() == 0)
    {
        return false;
    }
    vector<int> sides(4, 0);
    return dfs(matchSticks, sides, 0);
}
int main() {}