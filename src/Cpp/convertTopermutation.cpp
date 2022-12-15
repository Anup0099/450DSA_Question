#include <bits/stdc++.h>
using namespace std;

// Problem
// You are given an array AA of size NN. In one operation, you can:

// Choose an index ii (1\le i \le N)(1≤i≤N) and increase A_iA
// i
// ​
//   by 11.
// Find the minimum number of operations required to convert the array AA into a permutation of size NN. If it is impossible to do so, print -1−1.

// Note that a permutation of size NN contains each element from 11 to NN exactly once.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains the integer NN — the size of the array.
// The next line contains NN space-separated integers, the elements of the array AA.
// Output Format
// For each test case, output on a new line, the minimum number of operations required to convert the array AA into a permutation of size NN.
// If it is impossible to do so, print -1−1.
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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > n)
            {
                count += a[i] - n;
            }
        }
        cout << count << endl;
    }
    return 0;
}