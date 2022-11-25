#include <bits/stdc++.h> 
using namespace std;
// The followers of Psycho-Helmet religion follow a peculiar calendar – a normal year contains NN days. Every KK-th year is a “MOB” year. For example, if K = 4K=4, then years 4, 8, 12, 16 \ldots4,8,12,16… are “MOB” years. A “MOB” year contains MM additional days i.e. it contains N+MN+M days.

// Given XX, determine whether the day after (X-1)(X−1) days from Day 11 of Year 11 falls in a “MOB” year.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line containing NN, MM, KK and XX — the number of days in a normal year, the number of days in a “MOB” year, the number of years between two “MOB” years and the integer XX.
// Output Format
// For each test case, output YES on a new line if the day after (X-1)(X−1) days from Year 11, Day 11 falls in a “MOB” year, and NO otherwise.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k,x;
        cin>>n>>m>>k>>x;
         if((x-1)%(n+m)==n-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
    return 0;
} 