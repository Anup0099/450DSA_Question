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
    int id = logs[0][0];
    int work = logs[0][1];
    int len = logs.size();
    for (int i = 1; i < len; i++)
    {
        int diff = logs[i][1] - logs[i - 1][1];
        if (logs[i][1] - logs[i - 1][1] > work)
        {
            id = logs[i][0];
            work = diff;
        }
        else if (diff == work)
        {
           if(id>logs[i][0]){
                id=logs[i][0];
           }
           work = diff;
        }
    }
    return id;
}
int main() {}