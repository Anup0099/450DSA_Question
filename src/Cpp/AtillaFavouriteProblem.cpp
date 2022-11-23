#include <bits/stdc++.h> 
using namespace std;
// In order to write a string, Atilla needs to first learn all letters that are contained in the string.

// Atilla needs to write a message which can be represented as a string s. He asks you what is the minimum alphabet size required so that one can write this message.

// The alphabet of size x (1≤x≤26) contains only the first x Latin letters. For example an alphabet of size 4 contains only the characters a, b, c and d.

// Input
// The first line contains a single integer t (1≤t≤1000) — the number of test cases.

// The first line of each test case contains a single integer n (1≤n≤100) — the length of the string.

// The second line of each test case contains a string s of length n, consisting of lowercase Latin letters.
 int main() {
     
      long long t;
      cin>>t;
      for(;t--;)
      {
           char s[26]={'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
              long long n;
                cin>>n;
                string str;
                cin>>str;
                sort(str.begin(),str.end());
                long long count=0;
                for(long long i=0;i<26;i++)
                {
                   if(str.end()!=find(str.begin(),str.end(),s[i]))
                   {
                       count=i;
                   }
                }
                cout<<count+1<<endl;
      }
     
      
} 