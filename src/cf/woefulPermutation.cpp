#include <bits/stdc++.h>
using namespace std;
// You are given a positive integer n

// .

// Find any permutation p
// of length n such that the sum lcm(1,p1)+lcm(2,p2)+…+lcm(n,pn)

// is as large as possible.

// Here lcm(x,y)
// denotes the least common multiple (LCM) of integers x and y

// .

// A permutation is an array consisting of n
// distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
            a.push_back(i + 1);
        for (int i = n - 1; i >0; i -= 2)
        {
            swap(a[i], a[i - 1]);
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}