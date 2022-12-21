#include <bits/stdc++.h> 
using namespace std; 
// You are given two binary strings AA and BB, each of length NN. You can perform the following operation on string AA any number of times:

// Select a prime number XX.
// Choose any substring of string AA having length XX and reverse the substring.
// Determine whether you can make the string AA equal to BB using any (possibly zero) number of operations.

// A substring is obtained by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the string.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer NN — the length of the strings AA and BB.
// The second line contains the binary string AA.
// The third line contains the binary string BB.
// Output Format
// For each test case, output on a new line, YES, if you can make the string AA equal to BB using any number of operations and NO otherwise.

// You can print each character in uppercase or lowercase. For example, YES, yes, Yes, and yES are all identical.
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string a,b;
        cin>>a>>b;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                count++;
            }
        }
        if(count==0){
            cout<<"YES"<<endl;
        }
        else if(count==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
} 