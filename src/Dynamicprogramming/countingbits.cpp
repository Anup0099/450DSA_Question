#include <bits/stdc++.h>
using namespace std;
// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.


vector<int>countingbits(int n){
    vector<int>v;
    v.push_back(0);
    for (int i = 1; i <n+1; i++)
    {
        if(i%2!=0){
            v.push_back(v[i/2]+1);
        }else{
            v.push_back(v[i/2]);
        }
    }
    return v;
    
}

