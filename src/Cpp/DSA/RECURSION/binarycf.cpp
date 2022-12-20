#include <bits/stdc++.h> 
using namespace std;
// You are given an array a of length n. You can perform the following operation several (possibly, zero) times:

// Choose i, j, b: Swap the b-th digit in the binary representation of ai and aj.
// Find the maximum possible value of max(a)−min(a).

// In a binary representation, bits are numbered from right (least significant) to left (most significant). Consider that there are an infinite number of leading zero bits at the beginning of any binary representation.

// For example, swap the 0-th bit for 4=1002 and 3=112 will result 1012=5 and 102=2. Swap the 2-nd bit for 4=1002 and 3=112 will result 0002=02=0 and 1112=7.

// Here, max(a) denotes the maximum element of array a and min(a) denotes the minimum element of array a.

// The binary representation of x is x written in base 2. For example, 9 and 6 written in base 2 are 1001 and 110, respectively.

// Input
// The first line contains a single integer t (1≤t≤128) — the number of testcases.

// The first line of each test case contains a single integer n (3≤n≤512) — the length of array a.

// The second line of each test case contains n integers a1,a2,…,an (0≤ai<1024) — the elements of array a.

// It's guaranteed that the sum of n over all testcases does not exceed 512.

// Output
// For each testcase, print one integer — the maximum possible value of max(a)−min(a). 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x=a[i]^a[j];
                int count=0;
                while(x)
                {
                    x=x&(x-1);
                    count++;
                }
                if(count>max)
                {
                    max=count;
                }
            }
        }
        cout<<max<<endl;
    
    }
    return 0;
} 