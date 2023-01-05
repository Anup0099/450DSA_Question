#include <bits/stdc++.h> 
using namespace std;
// You are given a string s consisting of the characters 'a', 'b', and 'c' and a non-negative integer k. Each minute, you may take either the leftmost character of s, or the rightmost character of s.

// Return the minimum number of minutes needed for you to take at least k of each character, or return -1 if it is not possible to take k of each character.

  
int takeCharacters(string s,int k){
   if(s.length()<k) return -1;
  for(int i=0;i<s.length();i++){
     
  }
} 
int main() {
    string s = "aabaaaacaabc";
    int k = 2;
    cout << takeCharacters(s,k);
    return 0;
} 