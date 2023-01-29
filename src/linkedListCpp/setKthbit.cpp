#include <bits/stdc++.h> 
using namespace std;
 int setKthBit(int N, int K){
   return (N | (1<<(K-1)));
 }
int main() {
    int n = 384;
    int k = 7;
    cout<<setKthBit(n,k);
    return 0;
} 