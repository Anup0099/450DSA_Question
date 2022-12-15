#include <bits/stdc++.h> 
using namespace std;
// Your teacher gave you an assignment — given an integer NN, construct a binary string B = b_1b_2b_3\ldots b_NB=b 
// 1
// ​
//  b 
// 2
// ​
//  b 
// 3
// ​
//  …b 
// N
// ​
//   of length NN such that:

// \max(b_i, b_{i+1}) = 1
// max(b 
// i
// ​
//  ,b 
// i+1
// ​
//  )=1
// for every ii from 11 to N-1N−1.

// What is the minimum number of 11's such a binary string can contain?

// Note: A binary string is a string consisting of only the digits 00 and 11.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case contains a single integer NN — the length of binary string you'd like to construct.
// Output Format
// For each test case, output on a new line the minimum number of 11's required to complete the assignment. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<endl;
        }
        else{
            cout<<(n/2)<<endl;
        }
    }
} 