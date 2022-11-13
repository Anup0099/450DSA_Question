#include <bits/stdc++.h>
using namespace std;
// Given an integer array nums and an integer k, return the number of subarrays of nums where the least common multiple of the subarray's elements is k.

// A subarray is a contiguous non-empty sequence of elements within an array.

// The least common multiple of an array is the smallest positive integer that is divisible by all the array elements.
int subarrayLCM(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int lcm = nums[i];
        if (lcm == k)
            count++;
        for (int j = i + 1; j < n; j++)
        {
            lcm = (lcm * nums[j]) / __gcd(lcm, nums[j]);
            if (lcm == k)
                count++;
            if (lcm > k)
                break;
        }
    }
    return count;
}
int main() {}