#include <bits/stdc++.h> 
using namespace std;
// An array a
//  is good if for all pairs of adjacent elements, ai
//  and ai+1
//  (1≤i<n
// ) are of different parity. Note that an array of size 1
//  is trivially good.

// You are given an array of size n
// .

// In one operation you can select any pair of adjacent elements in which both elements are of the same parity, delete them, and insert their product in the same position.

// Find the minimum number of operations to form a good array.
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤500
// ). The description of the test cases follows.

// The first line of each test case contains an integer n
//  (1≤n≤100
// ).

// The second line of each test case contains n
//  integers a1,a2,…,an
//  (1≤ai≤109
// ).

// Output
// For each test case print an integer, the minimum number of operations required to form a good array. 

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]%2==0 && arr[i+1]%2==0){
                count++;
                arr[i+1]=arr[i]*arr[i+1];
            }
            else if(arr[i]%2!=0 && arr[i+1]%2!=0){
                count++;
                arr[i+1]=arr[i]*arr[i+1];
            }
        }
        cout<<count<<endl;
    }

} 