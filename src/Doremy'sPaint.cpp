#include <bits/stdc++.h> 
using namespace std;
// Doremy has n buckets of paint which is represented by an array a of length n. Bucket i contains paint with color ai.

// Let c(l,r) be the number of distinct elements in the subarray [al,al+1,…,ar]. Choose 2 integers l and r such that l≤r and r−l−c(l,r) is maximized. 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0;
        
    }
    return 0;
} 