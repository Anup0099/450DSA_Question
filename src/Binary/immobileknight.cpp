#include <bits/stdc++.h>
using namespace std;
// For an array of non-negative integers a of size n, we construct another array d as follows: d1=a1, di=|ai−ai−1| for 2≤i≤n

// .

// Your task is to restore the array a
// from a given array d

// , or to report that there are multiple possible arrays.
// Input

// The first line contains a single integer t
// (1≤t≤100

// ) — the number of test cases.

// The first line of each test case contains one integer n
// (1≤n≤100) — the size of the arrays a and d

// .

// The second line contains n
// integers d1,d2,…,dn (0≤di≤100) — the elements of the array d

// .

// It can be shown that there always exists at least one suitable array a

// under these constraints.
// Output

// For each test case, print the elements of the array a
// , if there is only one possible array a. Otherwise, print −1.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        int a[n];
        a[0] = d[0];
        for (int i = 1; i < n; i++)
        {
            if (d[i] > d[i - 1])
            {
                a[i] = d[i] - d[i - 1];
            }
            else
            {
                a[i] = d[i - 1] - d[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
   
}