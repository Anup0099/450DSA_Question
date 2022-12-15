#include <bits/stdc++.h>
using namespace std;
//  You are given an array a consisting of n integers. You want to distribute these n integers into two groups s1 and s2 (groups can be empty) so that the following conditions are satisfied:

// For each i (1≤i≤n), ai goes into exactly one group.
// The value |sum(s1)|−|sum(s2)| is the maximum possible among all such ways to distribute the integers.
// Here sum(s1) denotes the sum of the numbers in the group s1, and sum(s2) denotes the sum of the numbers in the group s2.

// Determine the maximum possible value of |sum(s1)|−|sum(s2)|.
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
            cin >> a[i];
        int sum = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
                sum += a[i];
            else
                sum2 += a[i];
        }
        cout << abs(abs(sum) - abs(sum2)) << endl;
    }
}