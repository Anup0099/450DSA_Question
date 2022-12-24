#include <bits/stdc++.h>
using namespace std;
// Consider an array AA consisting of NN positive elements. The frequency array of AA is the array BB of size NN such that B_i =B
// i
// ​
//  = frequency of element A_iA
// i
// ​
//   in AA.

// For example, if A = [4, 7, 4, 11, 2, 7, 7]A=[4,7,4,11,2,7,7], the frequency array B = [2, 3, 2, 1, 1, 3, 3]B=[2,3,2,1,1,3,3].

// You have lost the array AA, but fortunately you have the array BB.
// Your task is to construct the lexicographically smallest array AA such that:

// 1\le A_i \le 10^51≤A
// i
// ​
//  ≤10
// 5
//  ;
// The frequency array of AA is equal to BB.
// If no such array AA exists, print -1−1.

// Note: Array XX is lexicographically smaller than array YY, if X_i \lt Y_iX
// i
// ​
//  <Y
// i
// ​
//  , where ii is the first index where XX and YY differ.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN — the size of the array.
// The next line contains NN space-separated integers - B_1, B_2, \ldots, B_NB
// 1
// ​
//  ,B
// 2
// ​
//  ,…,B
// N
// ​
//  , the frequency array.
// Output Format
// For each test case, output on a new line, NN space separated integers - A_1, A_2, \ldots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  , the lexicographically smallest array AA. If no such array AA exists, print -1−1.
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

        sort(a, a + n);
        for

       
    }
}