#include <bits/stdc++.h>
using namespace std;
// The most popular feature on snapchat is Snapchat Streak.
// A streak is maintained between two people if both of them send at least one snap to each other daily.
// If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 00.

// Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for NN consecutive days.
// On the i^{th}i
// th
//   day, Chef sent A_iA
// i
// ​
//   snaps to Chefina while Chefina sent B_iB
// i
// ​
//   snaps to Chef.

// Find the maximum streak count they achieved in those NN days.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer NN — the number of days you observed.
// The second lines contains NN space-separated integers — A_1, A_2, \ldots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  , the number of snaps Chef sent to Chefina on the i^{th}i
// th
//   day.
// The third lines contains NN space-separated integers — B_1, B_2, \ldots, B_NB
// 1
// ​
//  ,B
// 2
// ​
//  ,…,B
// N
// ​
//  , the number of snaps Chefina sent to Chef on the i^{th}i
// th
//   day.
// Output Format
// For each test case, output on a new line, the maximum streak count they achieved in those NN days.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && b[i] > 0)
            {
                ans++;
            }
            else
            {
                ans = 0;
            }
            maxi = max(maxi, ans);
        }
        cout << maxi << endl;
    }
    return 0;
}