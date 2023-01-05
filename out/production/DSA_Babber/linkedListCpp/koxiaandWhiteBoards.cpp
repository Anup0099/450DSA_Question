#include <bits/stdc++.h>
using namespace std;
// Kiyora has n whiteboards numbered from 1 to n. Initially, the i-th whiteboard has the integer ai written on it.

// Koxia performs m operations. The j-th operation is to choose one of the whiteboards and change the integer written on it to bj.

// Find the maximum possible sum of integers written on the whiteboards after performing all m operations.

// Input
// Each test consists of multiple test cases. The first line contains a single integer t (1≤t≤1000) — the number of test cases. The description of test cases follows.

// The first line of each test case contains two integers n and m (1≤n,m≤100).

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109).

// The third line of each test case contains m integers b1,b2,…,bm (1≤bi≤109).

// Output
// For each test case, output a single integer — the maximum possible sum of integers written on whiteboards after performing all m operations.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int a[n];
        long long int b[m];
        long long int sum = 0;
        priority_queue<int, vector<int>, greater<int>> p;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p.push(a[i]);
        }
        long long int bsum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++)
        {
            p.pop();
            p.push(b[i]);
        }

        while (!p.empty())
        {
            sum += p.top();
            p.pop();
        }
        cout << sum << endl;
    }
}