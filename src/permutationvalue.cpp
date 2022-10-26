#include <bits/stdc++.h>
using namespace std;
// You are given an integer n. You have to construct a permutation of size n.

// A permutation is an array where each integer from 1 to s (where s is the size of permutation) occurs exactly once. For example, [2,1,4,3] is a permutation of size 4; [1,2,4,5,3] is a permutation of size 5; [1,4,3] is not a permutation (the integer 2 is absent), [2,1,3,1] is not a permutation (the integer 1 appears twice).

// A subsegment of a permutation is a contiguous subsequence of that permutation. For example, the permutation [2,1,4,3] has 10 subsegments: [2], [2,1], [2,1,4], [2,1,4,3], [1], [1,4], [1,4,3], [4], [4,3] and [3].

// The value of the permutation is the number of its subsegments which are also permutations. For example, the value of [2,1,4,3] is 3 since the subsegments [2,1], [1] and [2,1,4,3] are permutations.

// You have to construct a permutation of size n with minimum possible value among all permutations of size n.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
       cout<<v[0];
        for (int i = 1; i < n-1; i++)
        {
            cout << " " << v[i+1];
            
        }
        cout << " " << v[1] << endl;
        cout << endl;
    }
}