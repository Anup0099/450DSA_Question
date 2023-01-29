#include <bits/stdc++.h> 
using namespace std;
// A permutation of length n
//  is an array consisting of n
//  distinct integers from 1
//  to n
//  in arbitrary order. For example, [2,3,1,5,4]
//  is a permutation, but [1,2,2]
//  is not a permutation (2
//  appears twice in the array), and [1,3,4]
//  is also not a permutation (n=3
//  but there is 4
//  in the array). There are n!=n⋅(n−1)⋅(n−2)⋅…⋅1
//  different permutations of length n
// .

// Given a permutation p
//  of n
//  numbers, we create an array a
//  consisting of 2n
//  numbers, which is equal to p
//  concatenated with its reverse. We then define the beauty of p
//  as the number of inversions in a
// .

// The number of inversions in the array a
//  is the number of pairs of indices i
// , j
//  such that i<j
//  and ai>aj
// .

// For example, for permutation p=[1,2]
// , a
//  would be [1,2,2,1]
// . The inversions in a
//  are (2,4)
//  and (3,4)
//  (assuming 1-based indexing). Hence, the beauty of p
//  is 2
// .

// Your task is to find the sum of beauties of all n!
//  permutations of size n
// . Print the remainder we get when dividing this value by 1000000007
//  (109+7
// ).

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤105
// ). The description of the test cases follows.

// Each test case has only one line — the integer n
//  (1≤n≤105
// ).

// It is guaranteed that the sum of n
//  over all test cases does not exceed 105
// .

// Output
// For each test case, print one integer — the sum of beauties of all permutations of size n
//  modulo 1000000007
//  (109+7
// ). 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        //permutation of n numbers
        //n!=n*(n-1)*(n-2)*...*1
        //n!%1000000007
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=(ans*i)%1000000007;
        }
        cout<<ans<<endl;

    }
} 