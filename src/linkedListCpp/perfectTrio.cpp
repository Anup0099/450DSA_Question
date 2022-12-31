#include <bits/stdc++.h> 
using namespace std;
// Chef defines a group of three friends as a perfect group if the age of one person is equal to the sum of the age of remaining two people.

// Given that, the ages of three people in a group are A, B,A,B, and CC respectively, find whether the group is perfect.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of three space-separated integers A, B,A,B, and CC — the age of the three members of group. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b+c || b==a+c || c==a+b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
} 