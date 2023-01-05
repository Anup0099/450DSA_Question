#include <bits/stdc++.h> 
using namespace std; 
// Alice gave Bob 33 integers N, K,N,K, and SS. Help Bob find an SS-good sequence.

// A sequence BB of length NN is called SS-good if the following conditions are met:

// B_i \in \{-1, 0, 1\}B 
// i
// ​
//  ∈{−1,0,1} for each 1 \leq i \leq N1≤i≤N
// \sum_{i=1}^N B_i\cdot K^{i-1} = S∑ 
// i=1
// N
// ​
//  B 
// i
// ​
//  ⋅K 
// i−1
//  =S
// If there are multiple SS-good sequences, print any of them.
// If no SS-good sequence exists, print -2−2.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line of input containing three space-separated integers — N, K,N,K, and SS.
// Output Format
// For each test case:

// If no SS-good sequence exists, print -2−2.
// Otherwise, output NN space-separated integers denoting the SS-good sequence.
// If multiple SS-good sequences exist, you may print any of them.
int main() {
    int t;cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum<s){
                cout<<1<<" ";
                sum+=pow(k,i);
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
} 