#include <bits/stdc++.h>
using namespace std;
// Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.
int sumSubarrayMins(vector<int> &arr)
{
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int mini = INT_MAX;
        for (int j = i; j < arr.size(); j++)
        {
            mini = min(mini, arr[j]);
            sum += mini;
        }
    }

    return sum;
}
int main()
{
    vector<int> v = {3, 1, 2, 4};
   
    // print all subarray
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
        }
    }
}