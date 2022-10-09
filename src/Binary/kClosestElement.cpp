#include <bits/stdc++.h>
using namespace std;
// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

//     |a - x| < |b - x|, or
//     |a - x| == |b - x| and a < b
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int n = arr.size();
    int l = 0, r = n - 1;
    while (r - l + 1 > k)
    {
        if (abs(arr[l] - x) > abs(arr[r] - x))
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    vector<int> ans;
    for (int i = l; i <= r; i++)
    {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {}