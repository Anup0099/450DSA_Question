#include <bits/stdc++.h> 
using namespace std;
//  You are given an array a of n positive integers. Determine if, by rearranging the elements, you can make the array strictly increasing. In other words, determine if it is possible to rearrange the elements such that a1<a2<⋯<an holds.

// Input
// The first line contains a single integer t (1≤t≤100) — the number of test cases.

// The first line of each test case contains a single integer n (1≤n≤100) — the length of the array.

// The second line of each test case contains n integers ai (1≤ai≤109) — the elements of the array.

// Output
// For each test case, output "YES" (without quotes) if the array satisfies the condition, and "NO" (without quotes) otherwise.
int main() {

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
} 