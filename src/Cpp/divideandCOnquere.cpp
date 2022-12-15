#include <bits/stdc++.h>
using namespace std;

// An array b is good if the sum of elements of b is even.

// You are given an array a consisting of n positive integers. In one operation, you can select an index i and change ai:=⌊ai2⌋. †
// Find the minimum number of operations (possibly 0) needed to make a good. It can be proven that it is always possible to make a good.

// † ⌊x⌋ denotes the floor function — the largest integer less than or equal to x. For example, ⌊2.7⌋=2, ⌊π⌋=3 and ⌊5⌋=5.

// Input
// Each test contains multiple test cases. The first line contains a single integer t (1≤t≤1000) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single integer n (1≤n≤50) — the length of the array a.

// The second line of each test case contains n space-separated integers a1,a2,…,an (1≤ai≤106) — representing the array a.

// Do note that the sum of n over all test cases is not bounded.

// Output
// For each test case, output the minimum number of operations needed to make a good.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        //minmum number of operations to make a good array by changing ai:=⌊ai2⌋    

        int cnt = 0;
       int sum=0;
            
    }

}