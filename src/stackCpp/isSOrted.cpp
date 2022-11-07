#include <bits/stdc++.h>
using namespace std;
// You are given a permutation a1,a2,…,an of size n, where each integer from 1 to n appears exactly once.

// You can do the following operation any number of times (possibly, zero):

// Choose any three indices i,j,k (1≤i<j<k≤n).
// If ai>ak, replace ai with ai+aj. Otherwise, swap aj and ak.
// Determine whether you can make the array a sorted in non-descending order.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 != nums[i])
            {
                count++;
            }
        }
        if (count <= 2)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
}