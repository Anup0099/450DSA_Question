#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newIntervals)
{
    vector<vector<int>> ans;
    // int i = 0;
    // while (i < intervals.size())
    // {
    //     if (intervals[i][1] < newIntervals[0])
    //     {
    //         i++;
    //     }
    //     else if (intervals[i][0] > newIntervals[1])
    //     {
    //         intervals.insert(intervals.begin() + i, newIntervals);
    //         return intervals;
    //     }
    //     else
    //     {
    //         // merge them and erase the interval which was merged
    //         newIntervals[0] = min(intervals[i][0], newIntervals[0]);
    //         newIntervals[1] = max(intervals[i][1], newIntervals[1]);
    //         intervals.erase(intervals.begin() + i);
    //     }
    // }
    // intervals.push_back(newIntervals);
    // return intervals;
    int i = 0;
    while (i < intervals.size())
    {
        if (intervals[i][1] < newIntervals[0])
        {
            ans.push_back(intervals[i]);
        }
        else if (intervals[i][0] > newIntervals[1])
        {
            break;
        }
        else
        {
            // merge them and erase the interval which was merged
            newIntervals[0] = min(intervals[i][0], newIntervals[0]);
            newIntervals[1] = max(intervals[i][1], newIntervals[1]);
            // intervals.erase(intervals.begin() + i);
        }
        i++;
    }
    ans.push_back(newIntervals);
    while (i < intervals.size())
    {
        ans.push_back(intervals[i]);
        //always remember to increase i in while loop
        i++;
    }

    return ans;
}
int main()
{
}