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
    int anss = logs[0][1];int fi=INT_MAX;
        vector<int> ind;
        for(int i=1;i<logs.size();i++){
            int res = logs[i][1]-logs[i-1][1];
            if(res>anss){
                anss = res;
            }
        }
        for(int i=0;i<logs.size();i++){
            if(i==0){
                if(logs[i][1]==anss){
                    fi = min(fi,logs[i][0]);
                }
            }
            else if(logs[i][1]-logs[i-1][1]==anss){
                fi = min(fi,logs[i][0]);
            }
        }
        return fi;

   
}
int main() { 

}