#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    if (intervals.size() == 0)
        return res;
    sort(intervals.begin(), intervals.end());
    res.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] > res.back()[1])
        {
            res.push_back(intervals[i]);
        }
        else
        {
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        }
    }
    return res;
}
int main()
{
}