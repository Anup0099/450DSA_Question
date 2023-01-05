#include <bits/stdc++.h> 
using namespace std;
//  Suppose you have a binary array BB of length NN.
// A sequence x_1, x_2, \ldots, x_kx 
// 1
// ​
//  ,x 
// 2
// ​
//  ,…,x 
// k
// ​
//   is called good with respect to BB if it satisfies the following conditions:

// 1 \leq x_1 \lt x_2 \lt \ldots \lt x_k \leq N+11≤x 
// 1
// ​
//  <x 
// 2
// ​
//  <…<x 
// k
// ​
//  ≤N+1
// For every pair (i, j)(i,j) such that 1 \leq i \lt j \leq k1≤i<j≤k, the subarray B[x_i: x_j-1]B[x 
// i
// ​
//  :x 
// j
// ​
//  −1] contains (j-i)(j−i) more ones than zeros.
// That is, if B[x_i : x_j-1]B[x 
// i
// ​
//  :x 
// j
// ​
//  −1] contains c_1c 
// 1
// ​
//   ones and c_0c 
// 0
// ​
//   zeros, then c_1 - c_0 = j-ic 
// 1
// ​
//  −c 
// 0
// ​
//  =j−i must hold.
// Here, B[L: R]B[L:R] denotes the subarray consisting of elements [B_L, B_{L+1}, B_{L+2}, \ldots, B_R][B 
// L
// ​
//  ,B 
// L+1
// ​
//  ,B 
// L+2
// ​
//  ,…,B 
// R
// ​
//  ].
// Note that in particular, a sequence of size 11 is always good.

// For example, suppose B = [0,1,1,0,1,1]B=[0,1,1,0,1,1]. Then,

// The sequence [1,4,7][1,4,7] is a good sequence. The subarrays that need to be checked are B[1:3], B[1:6]B[1:3],B[1:6] and B[4:6]B[4:6], which all satisfy the condition.
// The sequence [1, 5][1,5] is not good, because B[1:4] = [0, 1, 1, 0]B[1:4]=[0,1,1,0] contains an equal number of zeros and ones (when it should contain one extra 11).
// Alice gave Bob a binary array AA of size NN and asked him to find the longest sequence that is good with respect to AA. Help Bob find one such sequence.
// If multiple possible longest sequences exist, you may print any of them.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN — the size of the binary array.
// The second line contains NN space-separated numbers — A_1 , A_2 , \ldots , A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//  .
// Output Format
// Each test case requires two lines of output:

// First, print on a new line a single integer KK — the maximum length of a sequence that is good with respect to AA
// On the next line, print KK space-separated integers in increasing order, denoting the indices of one such sequence.
// If there are multiple possible good sequences with maximum size, output any of them.

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
        int count=0;
        int max=0;
        int index=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                count++;
            }
            else{
                if(count>max){
                    max=count;
                    index=i;
                }
                count=0;
            }
        }
        if(count>max){
            max=count;
            index=n;
        }
        cout<<max<<endl;
        for(int i=index-max;i<index;i++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
} 