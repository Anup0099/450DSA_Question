#include <bits/stdc++.h>
using namespace std;
// You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:
I dont able to solve this type of problems because of the lack of practice
    // The length of the subarray is k, and
    // All the elements of the subarray are distinct.
    // Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

    // A subarray is a contiguous non-empty sequence of elements within an array.
    long long
    maximumSubarraySum(vector<int> &nums, int k)
{
    unordered_set<int> s;
    int n = nums.size();
    long long sum = 0;
    long long maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.size() < k)
        {
            if (s.find(nums[i]) == s.end())
            {
                s.insert(nums[i]);
                sum += nums[i];
            }
        }
        else
        {
            maxSum = max(maxSum, sum);
            if (s.find(nums[i]) == s.end())
            {
                sum -= *s.begin();
                s.erase(s.begin());
                s.insert(nums[i]);
                sum += nums[i];
            }
        }
    }
    maxSum = max(maxSum, sum);
    return maxSum;
}
int main()
{
    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;
    cout << maximumSubarraySum(nums, k);
}