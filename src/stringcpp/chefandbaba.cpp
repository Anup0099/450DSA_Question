#include <bits/stdc++.h>
using namespace std;
// Chef gives an array
// �
// A with
// �
// N elements to Babla. Babla's task is to find the maximum non-negative integer
// �
// X such that:

// No element in the array belongs to the range
// [
// −
// �
// ,
// �
// ]
// [−X,X]. In other words, for all
// (
// 1
// ≤
// �
// ≤
// �
// )
// (1≤i≤N), either
// �
// �
// <
// −
// �
// A
// i
// ​
//  <−X or
// �
// �
// >
// �
// A
// i
// ​
//  >X.
// Help Babla to find the maximum non-negative integer
// �
// X for which the given condition is satisfied or determine if no such
// �
// X exists.

// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer
// �
// N — the number of elements in the array.
// The second line of each test case contains
// �
// N space-separated integers
// �
// 1
// ,
// �
// 2
// ,
// …
// ,
// �
// �
// A
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//   representing the array
// �
// A.
// Output Format
// For each test case, output on a new line, the maximum non-negative integer
// �
// X, satisfying the above condition.
// If no such
// �
// X exists, output
// −
// 1
// −1 instead.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // vector<long long> b;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] >= 0)
        //     {
        //         b.push_back(a[i]);
        //     }
        // }

        // sort(b.begin(), b.end());
        long long mini = INT_MAX;

        long long neg = INT_MAX;
        sort(a.begin(), a.end());
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] < 0)
            {
                neg = abs(a[i]);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                mini = a[i];
                break;
            }
        }
        long long ans = min(mini, neg) - 1;
        cout << ans << endl;
    }
    return 0;
}