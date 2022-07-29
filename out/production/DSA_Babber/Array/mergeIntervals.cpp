#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> intervals)
{
    vector<vector<int>> res;
    if (intervals.size() == 0)
        return res;
    sort(intervals.begin(), intervals.end());
    vector<int> tempIterval = intervals[0];

    for (auto it : intervals)
    {
        if (it[0] <= tempIterval[1])
        {
            tempIterval[1] = max(tempIterval[1], it[1]);
        }
        else
        {
            res.push_back(tempIterval);
            tempIterval = it;
        }
    }
    res.push_back(tempIterval);
    return res;
}
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> res = merge(intervals);
    for (auto it : res)
    {
        cout << it[0] << " " << it[1] << endl;
    }
    return 0;
}