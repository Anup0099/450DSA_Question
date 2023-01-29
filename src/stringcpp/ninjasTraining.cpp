#include <bits/stdc++.h>
using namespace std;
int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{
    // base case
    if (day == 0)
    {
        int maxi = 0;
        for (int i = 0; i < 3; i++)
        {
            if (i != last)
            {
                maxi = max(maxi, points[0][i]);
            }
        }
        dp[day][last] = maxi;
    }
    int maxi = 0;
    if (dp[day][last] != -1)
        return dp[day][last];
    for (int task = 0; task < 3; task++)
    {
        // check if last task is not equal to current task
        if (task != last)
        {
            int point = points[day][task] + f(day - 1, task, points, dp);
            maxi = max(maxi, point);
        }
    }

    return dp[day][last] = maxi;
}
int ninjasTraining(vector<vector<int>> &points, int n)
{
    // base case
    // vector<vector<int>> dp(n, vector<int>(4, -1));
    // // for(auto it:v){

    // int last = points.size();
    // return f(n - 1, last, points, dp);

    vector<vector<int>> dp(n, vector<int>(4, 0));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));
    for (int day = 0; day < n; day++)
    {
        for (int last = 0; last < 4; last++)
        {
            dp[day][last] = 0;
            for (int task = 0; task <= 2; task++)
            {
                if (task != last)
                {
                    int activity = points[day][task] + dp[day - 1][task];
                    dp[day][last] = max(dp[day][last], activity);
                }
            }
        }
    }
    return dp[n - 1][3];
}
int main() {}