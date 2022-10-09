#include <bits/stdc++.h>
using namespace std;
// There are n employees, each with a unique id from 0 to n - 1.

// You are given a 2D integer array logs where logs[i] = [idi, leaveTimei] where:

// idi is the id of the employee that worked on the ith task, and
// leaveTimei is the time at which the employee finished the ith task. All the values leaveTimei are unique.
// Note that the ith task starts the moment right after the (i - 1)th task ends, and the 0th task starts at time 0.

// Return the id of the employee that worked the task with the longest time. If there is a tie between two or more employees, return the smallest id among them.
int hardestWorker(int n, vector<vector<int>> &logs)
{
    vector<int>arr(n, 0);
    for (int i = 0; i < logs.size(); i++)
    {
        arr[logs[i][0]] += logs[i][1];
    }
    int max = 0;
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            id = i;
        }
    }
    return id;
}
int main() {}