#include <bits/stdc++.h> 
using namespace std;
//  You are given a positive integer 
// �
// N.

// Construct an array 
// �
// A of length 
// �
// N such that:

// −
// 300
// ≤
// �
// �
// ≤
// 300
// −300≤A 
// i
// ​
//  ≤300
// ∣
// �
// �
// +
// �
// �
// +
// 1
// +
// �
// �
// +
// 2
// +
// …
// +
// �
// �
// ∣
// ∣A 
// i
// ​
//  +A 
// i+1
// ​
//  +A 
// i+2
// ​
//  +…+A 
// j
// ​
//  ∣ is not divisible by 
// (
// �
// −
// �
// +
// 1
// )
// (j−i+1) for all pairs 
// (
// �
// ,
// �
// )
// (i,j) 
// (
// 1
// ≤
// �
// <
// �
// ≤
// �
// )
// (1≤i<j≤N).
// Note that 
// ∣
// �
// ∣
// ∣X∣ denotes the absolute value of 
// �
// X. For example 
// ∣
// −
// 2
// ∣
// =
// 2
// ∣−2∣=2 and 
// ∣
// 5
// ∣
// =
// 5
// ∣5∣=5.
// If multiple such arrays exist, print any.
// It is guaranteed that there exists at least one valid array satisfying the given constraints.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of single line of input.
// The only line of each test case contains a positive integer 
// �
// N — the length of array 
// �
// A.
// Output Format
// For each test case, output on a new line, 
// �
// N space-separated integers, denoting array 
// �
// A.
// If multiple such arrays exist, print any.
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                a[i]=1;
            }
            else{
                a[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
} 