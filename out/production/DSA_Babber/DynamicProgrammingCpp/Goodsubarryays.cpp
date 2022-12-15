#include <bits/stdc++.h>
using namespace std;
// This is the easy version of this problem. In this version, we do not have queries. Note that we have multiple test cases in this version. You can make hacks only if both versions of the problem are solved.

// An array b of length m is good if for all i the i-th element is greater than or equal to i. In other words, b is good if and only if bi≥i for all i (1≤i≤m).

// You are given an array a consisting of n positive integers. Find the number of pairs of indices (l,r), where 1≤l≤r≤n, such that the array [al,al+1,…,ar] is good.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤2⋅105). Description of the test cases follows.

// The first line of each test case contains an integer n (1≤n≤2⋅105), the length of the array a.

// The second line of each test case contains n space-separated integers a1,a2,…,an (1≤ai≤n), representing the array a.

// It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, print the number of suitable pairs of indices.
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
        {
            cin >> a[i];
        }
        int ans = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            // check for all subarray
            int max = a[i];
            for (int j = i; j < n; j++)
            {
                if (a[j] > max)
                {
                    max = a[j];
                }
                if (max >= j - i + 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}