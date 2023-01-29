#include <bits/stdc++.h> 
using namespace std;
//  Problem
// Chef calls a number lucky if it contains the digit 77 at least once.

// Given a number XX, determine if it is a lucky number or not.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains an integer XX — the number mentioned in the problem statement.
// Output Format
// For each test case, output YES if XX is a lucky number. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int flag=0;
        while(x>0){
            if(x%10==7){
                flag=1;
                break;
            }
            x=x/10;
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
} 