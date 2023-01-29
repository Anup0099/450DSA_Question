#include <bits/stdc++.h>
using namespace std;
//  Initially, Chef had an array 
// �
// A of length 
// �
// N. Chef performs the following operation on 
// �
// A at most once:

// Select 
// �
// L and 
// �
// R such that 
// 1
// ≤
// �
// ≤
// �
// ≤
// �
// 1≤L≤R≤N and set 
// �
// �
// :
// =
// �
// �
// +
// 1
// A 
// i
// ​
//  :=A 
// i
// ​
//  +1 for all 
// �
// ≤
// �
// ≤
// �
// L≤i≤R.
// Determine the maximum number of inversions Chef can decrease from the array 
// �
// A by applying the operation at most once.
// More formally, let the final array obtained after applying the operation at most once be 
// �
// B. You need to determine the maximum value of 
// �
// �
// �
// (
// �
// )
// −
// �
// �
// �
// (
// �
// )
// inv(A)−inv(B) (where 
// �
// �
// �
// (
// �
// )
// inv(X) denotes the number of inversions in array 
// �
// X).

// Note: The number of inversions in an array 
// �
// X is the number of pairs 
// (
// �
// ,
// �
// )
// (i,j) such that 
// 1
// ≤
// �
// <
// �
// ≤
// �
// 1≤i<j≤N and 
// �
// �
// >
// �
// �
// X 
// i
// ​
//  >X 
// j
// ​
//  .

// Input Format
// The first line contains a single integer 
// �
// T — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer 
// �
// N — the size of the array 
// �
// A.
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
//   denoting the array 
// �
// A.
// Output Format
// For each test case, output the maximum value of 
// �
// �
// �
// (
// �
// )
// −
// �
// �
// �
// (
// �
// )
// inv(A)−inv(B) which can be obtained after applying at most one operation.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
       
    }
    return 0;
}