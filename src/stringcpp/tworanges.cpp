#include <bits/stdc++.h> 
using namespace std;
//  Problem
// Chef has two ranges 
// [
// �
// ,
// �
// ]
// [A,B] and 
// [
// �
// ,
// �
// ]
// [C,D]. Chef needs to find the number of integers that belong to at least one of the ranges.

// Note: A range 
// [
// �
// ,
// �
// ]
// [P,Q] contains all the integers 
// {
// �
// ,
// �
// +
// 1
// ,
// �
// +
// 2
// ,
// …
// ,
// �
// −
// 1
// ,
// �
// }
// {P,P+1,P+2,…,Q−1,Q}.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of a single line containing 
// 4
// 4 integers 
// �
// ,
// �
// ,
// �
// ,
// A,B,C, and 
// �
// D, as mentioned in the statement.
// Output Format
// For each test case, output on a new line, the number of integers that belong to at least one of the ranges.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        if(b<c || d<a)
        {
            // if b<c then there is no overlap between the two ranges and the answer is the sum of the lengths of the two ranges 
            ans=b-a+1+d-c+1;
        }
        else
        {
            ans=max(b,d)-min(a,c)+1;
        }
        cout<<ans<<endl;
    }
    return 0;

} 