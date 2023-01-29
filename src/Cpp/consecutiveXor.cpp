#include <bits/stdc++.h> 
using namespace std;
//  Problem
// Chef has an array AA of length NN. He can perform the following operation on AA:

// 1) Select an index ii (1 \le i \le N - 1)(1≤i≤N−1) and select an integer XX (1 \le X \lt 2^{20})(1≤X<2 
// 20
//  ).\\
// 2) Set A_i := (A_i \oplus X)A 
// i
// ​
//  :=(A 
// i
// ​
//  ⊕X) and A_{i + 1} := (A_{i + 1} \oplus X)A 
// i+1
// ​
//  :=(A 
// i+1
// ​
//  ⊕X). (Here, \oplus⊕ denotes the bitwise XOR operation)

// Determine if Chef can make all the elements of AA equal by applying the above operation any number of times (possibly zero).

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer NN — the size of the array AA.
// The second line of each test case contains NN space-separated integers A_1, A_2, \dots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   denoting the array AA.
// Output Format
// For each test case, output YES if it is possible to make all the elements of AA equal by applying the given operation any number of times. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=a[0];
        for(int i=1;i<n;i++){
            x=x^a[i];
        }
        





        

        
    }
    return 0;
} 