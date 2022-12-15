#include <bits/stdc++.h>
using namespace std;
// You are given n of integers a1,a2,…,an. Process q queries of two types:

// query of the form "0 xj": add the value xj to all even elements of the array a,
// query of the form "1 xj": add the value xj to all odd elements of the array a.
// Note that when processing the query, we look specifically at the odd/even value of ai, not its index.

// After processing each query, print the sum of the elements of the array a.

// Please note that the answer for some test cases won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like long long for C++).

// Input
// The first line of the input contains an integer t (1≤t≤104) — the number of test cases.

// The descriptions of the test cases follow.

// The first line of each test case contains two integers n and q (1≤n, q≤105) — the length of array a and the number of queries.

// The second line of each test case contains exactly n integers: a1,a2,…,an (1≤ai≤109) — elements of the array a.

// The following q lines contain queries as two integers typej and xj (0≤typej≤1, 1≤xj≤104).

// It is guaranteed that the sum of values n over all test cases in a test does not exceed 105. Similarly, the sum of values q over all test cases does not exceed 105.

// Output
// For each test case, print q numbers: the sum of the elements of the array a after processing a query.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (q--)
        {
            int type, x;
            cin >> type >> x;
            long long int sum = 0;
           for(int i = 0; i < n; i++){
                if(type == 0 && a[i] % 2 == 0){
                     a[i] += x;
                }
                else if(type == 1 && a[i] % 2 != 0){
                     a[i] += x;
                }
           }
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
}
