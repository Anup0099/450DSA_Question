#include <bits/stdc++.h> 
using namespace std;
// You are given an array A = [A_1, A_2, \ldots, A_N]A=[A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  ].

// Is it possible to partition AA into two non-empty subsequences S_1S 
// 1
// ​
//   and S_2S 
// 2
// ​
//   such that sum(S_1) \times sum(S_2)sum(S 
// 1
// ​
//  )×sum(S 
// 2
// ​
//  ) is odd?

// Here, sum(S_1)sum(S 
// 1
// ​
//  ) denotes the sum of elements in S_1S 
// 1
// ​
//  , and sum(S_2)sum(S 
// 2
// ​
//  ) is defined similarly.

// Note: S_1S 
// 1
// ​
//   and S_2S 
// 2
// ​
//   must partition AA, that is:

// S_1S 
// 1
// ​
//   and S_2S 
// 2
// ​
//   must be non-empty
// Every element of AA must be in either S_1S 
// 1
// ​
//   or S_2S 
// 2
// ​
 
// S_1S 
// 1
// ​
//   and S_2S 
// 2
// ​
//   must be disjoint (in terms of which indices their subsequences represent)
// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of 2 lines of input.
// The first line of each test case contains a single integer NN, the size of the array.
// The next line contains NN space-separated integers A_1, A_2, \ldots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  : the elements of the array.
// Output Format
// For each test case, print on a new line the answer: YES if the array can be partitioned into two subsequences satisfying the condition, and NO otherwise.

// Each character of the output may be printed in either uppercase or lowercase, i.e, YES, yes, YEs, and yEs will all be treated as equivalent. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
} 