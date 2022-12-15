#include <bits/stdc++.h> 
using namespace std;
// You have an array a of size n consisting only of zeroes and ones and an integer k. In one operation you can do one of the following:

// Select 2 consecutive elements of a and replace them with their minimum (that is, let a:=[a1,a2,…,ai−1,min(ai,ai+1),ai+2,…,an] for some 1≤i≤n−1). This operation decreases the size of a by 1.
// Select k consecutive elements of a and replace them with their maximum (that is, let a:=[a1,a2,…,ai−1,max(ai,ai+1,…,ai+k−1),ai+k,…,an] for some 1≤i≤n−k+1). This operation decreases the size of a by k−1.
// Determine if it's possible to turn a into [1] after several (possibly zero) operations.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤1000). The description of the test cases follows.

// The first line of each test case contains two integers n and k (2≤k≤n≤50), the size of array a and the length of segments that you can perform second type operation on.

// The second line contains n integers a1,a2,…,an (ai is 0 or 1), elements of array a.

// Output
// For each test case, if it is possible to turn a into [1], print "YES", otherwise print "NO". 
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                count++;
            }
        }
        if(count==1){
            cout<<"YES"<<endl;
        }
        else if(count==n){
            if(k==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(k==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
    
} 