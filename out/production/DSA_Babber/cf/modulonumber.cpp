#include <bits/stdc++.h> 
using namespace std;
// You are given an integer N between −1018 and

// 1018 (inclusive).

// Find an integer
// x between 0 and

// 998244353−1 (inclusive) that satisfies the following condition. It can be proved that such an integer is unique.

// N−x is a multiple of 998244353. 
int main() {
  signed  int n;
    cin >> n;
   signed int ans=0;
   signed int x=INT_MIN;
    if((n)%998244353==0){
       cout<< ans;
    }
    else{
        ans=(n-x)/998244353;
    }
    cout<<ans<<endl;
} 