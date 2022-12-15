#include <bits/stdc++.h>
using namespace std;
// Monocarp has forgotten the password to his mobile phone. The password consists of 4 digits from 0 to 9 (note that it can start with the digit 0).

// Monocarp remembers that his password had exactly two different digits, and each of these digits appeared exactly two times in the password. Monocarp also remembers some digits which were definitely not used in the password.

// You have to calculate the number of different sequences of 4 digits that could be the password for Monocarp's mobile phone (i. e. these sequences should meet all constraints on Monocarp's password).

// Input
// The first line contains a single integer t (1≤t≤200) — the number of testcases.

// The first line of each testcase contains a single integer n (1≤n≤8) — the number of digits for which Monocarp remembers that they were not used in the password.

// The second line contains n different integers a1,a2,…an (0≤ai≤9) representing the digits that were not used in the password. Note that the digits a1,a2,…,an are given in ascending order.

// Output
// For each testcase, print one integer — the number of different 4-digit sequences that meet the constraints.
int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // nCr
        int count = nCr(10-n, 2);
        cout << count * 6 << endl;
    }
}