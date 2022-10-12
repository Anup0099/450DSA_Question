#include <bits/stdc++.h>
using namespace std;
#define int int64_t
// A sequence of n numbers is called permutation if it contains all numbers from 1 to n exactly once. For example, the sequences [3,1,4,2], [1] and [2,1] are permutations, but [1,2,1], [0,1] and [1,3,4] are not.

// For a given number n you need to make a permutation p such that two requirements are satisfied at the same time:

// For each element pi, at least one of its neighbors has a value that differs from the value of pi by one. That is, for each element pi (1≤i≤n), at least one of its neighboring elements (standing to the left or right of pi) must be pi+1, or pi−1.
// the permutation must have no fixed points. That is, for every i (1≤i≤n), pi≠i must be satisfied.
// Let's call the permutation that satisfies these requirements funny.

// For example, let n=4. Then [4,3,1,2] is a funny permutation, since:

// to the right of p1=4 is p2=p1−1=4−1=3;
// to the left of p2=3 is p1=p2+1=3+1=4;
// to the right of p3=1 is p4=p3+1=1+1=2;
// to the left of p4=2 is p3=p4−1=2−1=1.
// for all i is pi≠i.
// For a given positive integer n, output any funny permutation of length n, or output -1 if funny permutation of length n does not exist.
void printArray(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {

            v.push_back(i + 1);
        }
        do
        {
            bool flag = true;
           

            
            }
        } while (next_permutation(v.begin(), v.end()));

       


        
    }
}