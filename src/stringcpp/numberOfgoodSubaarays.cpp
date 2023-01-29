#include <bits/stdc++.h>
using namespace std;
//  Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A subarray arr is good if it there are at least k pairs of indices (i, j) such that i < j and arr[i] == arr[j].

// A subarray is a contiguous non-empty sequence of elements within an array.

long long countGood(vector<int> &nums, int k)
{
    long long count = 0;
    int n = nums.size();
    unordered_map<int, int> map;
    for (auto it : nums)
    {
        map.insert({it, 0});
    }
    
   
}
int main()
{
    vector<int> nums = {1, 1, 1, 1, 1};
    int k = 10;
    cout << countGood(nums, k);
}