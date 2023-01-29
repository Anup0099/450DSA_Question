#include <bits/stdc++.h>
using namespace std;
//  You are given a permutation† p of length n and a positive integer k≤n.

// In one operation, you:

// Choose k distinct elements pi1,pi2,…,pik.
// Remove them and then add them sorted in increasing order to the end of the permutation.
// For example, if p=[2,5,1,3,4] and k=2 and you choose 5 and 3 as the elements for the operation, then [2,5,1,3,4]→[2,1,4,3,5].

// Find the minimum number of operations needed to sort the permutation in increasing order. It can be proven that it is always possible to do so.

// † A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

// Input
// The first line contains a single integer t (1≤t≤104) — the number of test cases. The description of test cases follows.

// The first line of each test case contains two integers n and k (2≤n≤105, 1≤k≤n).

// The second line of each test case contains n integers p1,p2,…,pn (1≤pi≤n). It is guaranteed that p is a permutation.

// It is guaranteed that the sum of n over all test cases does not exceed 105.

// Output
// For each test case output a single integer — the minimum number of operations needed to sort the permutation. It can be proven that it is always possible to do so.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
      vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long ans = 0;
        long long pos = 1;
        for(auto it:arr){
            if(it==pos){
                pos++;
                ans++;
            }
            

        }
        long long ans2 = n-ans;
        if(ans2%k==0){
            cout<<ans2/k<<endl;
        }
        else{
            cout<<ans2/k+1<<endl;
        }
        

    }
    return 0;
}