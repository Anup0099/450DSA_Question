#include <bits/stdc++.h> 
using namespace std; 

// Chef visited a grocery store for fresh supplies. There are NN items in the store where the i^{th}i 
// th
//   item has a freshness value A_iA 
// i
// ​
//   and cost B_iB 
// i
// ​
//  .

// Chef has decided to purchase all the items having a freshness value greater than equal to XX. Find the total cost of the groceries Chef buys.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains two space-separated integers NN and XX — the number of items and the minimum freshness value an item should have.
// The second line contains NN space-separated integers, the array AA, denoting the freshness value of each item.
// The third line contains NN space-separated integers, the array BB, denoting the cost of each item.
// Output Format
// For each test case, output on a new line, the total cost of the groceries Chef buys.
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]>=x){
                sum+=b[i];
            }
        }
        cout<<sum<<endl;
    }
} 