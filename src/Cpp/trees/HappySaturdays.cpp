#include <bits/stdc++.h> 
using namespace std;
// Let us define F(B,L,R) as the sum of a subarray of an array B bounded by indices L and R (both inclusive). Formally, F(B,L,R)=BL+BL+1+⋯+BR.

// An array C of length K is called a happy array if all the prefix sums of C are non-negative. Formally, the terms F(C,1,1),F(C,1,2),…,F(C,1,K) are all non-negative.

// Given an array A of N integers, find the result of adding the sums of all the happy subarrays in the array A.

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.
// Each test case begins with one line consisting an integer N denoting the number of integers in the input array A. Then the next line contains N integers A1,A2,…,AN representing the integers in given input array A.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the result of adding the sums of all happy subarrays in the given input array A. 
//input 
// 2
// 5
// 1 -2 3 -2 4
// 3
// 1 0 3
//output Case #1: 14
// Case #2: 12


int main() {
    int t, x = 1;
    cin >> t;
    while (x <= t) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
       //find all subarrays
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int sum2 = 0;
            for (int j = i; j < n; j++) {
                sum2 += a[j];
                if (sum2 >= 0) {
                    sum += sum2;
                }
            }
        }
        cout << "Case #" << x << ": " << sum << endl;
        x++;
    }     
} 