#include <bits/stdc++.h>
using namespace std;
// There are n pieces of tangerine peel, the i-th of them has size ai. In one step it is possible to divide one piece of size x into two pieces of positive integer sizes y and z so that y+z=x.

// You want that for each pair of pieces, their sizes differ strictly less than twice. In other words, there should not be two pieces of size x and y, such that 2x≤y. What is the minimum possible number of steps needed to satisfy the condition?

// Input
// The first line of the input contains a single integer t (1≤t≤100) — the number of test cases. The description of test cases follows.

// The first line of each test case contains the integer n (1≤n≤100).

// Then one line follows, containing n integers a1≤a2≤…≤an (1≤ai≤107).

// Output
// For each test case, output a single line containing the minimum number of steps.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        if (a[0] == 1)
        {
            for (int i = 0; i < n; i++)
            {
                int divide = a[i] / a[0];
                ans += divide - 1;
            }
            cout << ans << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                
                int divide = a[i] / (a[0] * 2);
                ans += divide;
            }
            cout << ans << endl;
        }
    }
}