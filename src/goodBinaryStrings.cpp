#include <bits/stdc++.h> 
using namespace std;

// You are given a binary string SS. A binary string is a string consisting of only 00's and 11's.

// A binary string is called good if it has an equal number of occurrences of \texttt{01}01 substrings and \texttt{10}10 substrings. Note that these substrings may overlap. For example, the string 11010011101001 is good since there are two occurrences of \texttt{01}01 (11\underline{01}00111 
// 01
// ​
//  001 and 11010\underline{01}11010 
// 01
// ​
//  ) and two occurrences of \texttt{10}10 (1\underline{10}10011 
// 10
// ​
//  1001 and 110\underline{10}01110 
// 10
// ​
//  01).

// Find the number of indices ii (1 \le i \le |S|)(1≤i≤∣S∣) such that after flipping S_iS 
// i
// ​
//  , the resultant binary string is good. (If S_iS 
// i
// ​
//   is 00, flipping it changes it to 11, and if S_iS 
// i
// ​
//   is 11, flipping it changes it to 00)

// Note: A string AA is a substring of a string BB if AA can be obtained from BB by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The second line of each test case contains a binary string SS containing 00s and 11s only.
// Output Format
// For each test case, output on a single line the number indices ii such that flipping S_iS 
// i
// ​
//   results in a good binary string.
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int c1=0,c2=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                c1++;
            }
            if(s[i]=='1' && s[i+1]=='0'){
                c2++;
            }
        }
        
       

    }
    return 0;
} 