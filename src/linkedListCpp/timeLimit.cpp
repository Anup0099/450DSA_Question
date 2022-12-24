#include <bits/stdc++.h>
using namespace std;
// Valera wanted to prepare a Codesecrof round. He's already got one problem and he wants to set a time limit (TL) on it.

// Valera has written n correct solutions. For each correct solution, he knows its running time (in seconds). Valera has also wrote m wrong solutions and for each wrong solution he knows its running time (in seconds).

// Let's suppose that Valera will set v seconds TL in the problem. Then we can say that a solution passes the system testing if its running time is at most v seconds. We can also say that a solution passes the system testing with some "extra" time if for its running time, a seconds, an inequality 2a ≤ v holds.

// As a result, Valera decided to set v seconds TL, that the following conditions are met:

// v is a positive integer;
// all correct solutions pass the system testing;
// at least one correct solution passes the system testing with some "extra" time;
// all wrong solutions do not pass the system testing;
// value v is minimum among all TLs, for which points 1, 2, 3, 4 hold.
// Help Valera and find the most suitable TL or else state that such TL doesn't exist.

// Input
// The first line contains two integers n, m (1 ≤ n, m ≤ 100). The second line contains n space-separated positive integers a1, a2, ..., an (1 ≤ ai ≤ 100) — the running time of each of the n correct solutions in seconds. The third line contains m space-separated positive integers b1, b2, ..., bm (1 ≤ bi ≤ 100) — the running time of each of m wrong solutions in seconds.

// Output
// If there is a valid TL value, print it. Otherwise, print -1.
int main()
{

    int n, m;
    cin >> n >> m;
    int ar1[n], ar2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ar2[i];
    }
    sort(ar1, ar1 + n);
    sort(ar2, ar2 + m);
    int tmin = 2 * ar1[0];
    tmin = max(tmin, ar1[n - 1]);
    if (ar2[0] <= tmin)
    {
        cout << -1;
    }
    else
    {
        cout << tmin;
    }
}