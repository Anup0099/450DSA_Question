#include <bits/stdc++.h>
using namespace std;
// John participates in an annual walking competition called Walktober. The competition runs for a total of N days and tracks the daily steps of the participants for all the N days. Each participant will be assigned a unique ID ranging from 1 to M where M is the total number of registered participants. A global scoreboard is maintained tracking the daily steps of each participant.

// John is determined to win Walktober this year and his goal is to score the maximum daily steps on each of the N days among all the participants. Having participated in Walktober last year as well, he wanted to know how many steps he fell short of in achieving his goal. Given the previous year scoreboard, calculate the minimum additional steps he needed over his last year score in order to achieve his goal of scoring the maximum daily steps every day.

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.
// The first line of each test case contains three integers M, N, and P denoting the total number of participants, the total number of days the competition runs, and the last year participant ID of John.
// The next M lines describe the scoreboard of the previous year and contains N integers each. The j-th integer of the i-th line denotes the step count Si,j of the participant with ID i on the j-th day of the competition.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum total additional steps needed by John to achieve his goal.

int main()
{
    // t starts from 1
    int t, x = 1;
    cin >> t;

    while (x <= t)
    {
        int m, n, p;
        cin >> m >> n >> p;
        int a[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int max = INT_MIN;
            for (int j = 0; j < m; j++)
            {
                //max equa;ls to the max of the column
                if (a[j][i] > max)
                {
                    max = a[j][i];
                }
            }
            //ans equals max of the column - the value of the row of the person
            ans += max - a[p - 1][i];
        }
        x++;

        cout << "Case #" << x-1 << ": " << ans << endl;
    }
}