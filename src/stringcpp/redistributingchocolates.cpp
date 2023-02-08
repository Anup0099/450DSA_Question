#include <bits/stdc++.h> 
using namespace std;
// Alice, Bob, and Charlie have 
// �
// ,
// �
// ,
// X,Y, and 
// �
// Z chocolates respectively.
// Find whether you can redistribute the chocolates such that:

// Each person has at least one chocolate;
// No two people have same number of chocolates;
// No chocolate is left after redistribution.
// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// The first and only line of each test case contains three space-separated integers 
// �
// ,
// �
// ,
// X,Y, and 
// �
// Z — the number of chocolates Alice, Bob, and Charlie have initially.
// Output Format
// For each test case, output on a new line YES, if you can redistribute all the chocolates such that all the given conditions are met, and NO otherwise.

// You may print each character in uppercase or lowercase. For example, NO, no, No and nO, are all considered identical. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
       if(x+y+z>5){
              cout<<"YES"<<endl;
         }
         else{
              cout<<"NO"<<endl;
       }
       
    }
    return 0;
} 