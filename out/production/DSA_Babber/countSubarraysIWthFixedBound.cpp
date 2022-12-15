#include <bits/stdc++.h>
using namespace std;
// You are given an integer array nums and two integers minK and maxK.

// A fixed-bound subarray of nums is a subarray that satisfies the following conditions:

// The minimum value in the subarray is equal to minK.
// The maximum value in the subarray is equal to maxK.
// Return the number of fixed-bound subarrays.

// A subarray is a contiguous part of an array.

long long countSubarrays(vector<int> &nums, int minK, int maxK)
{
    int n = nums.size();
    long long ans = 0;
   
    for (int i = 0; i < n; i++)
    {
        int min = nums[i];
        int max = nums[i];
        for (int j = i; j < n; j++)
        {
            if (nums[j] < min)
            {
                min = nums[j];
            }
            if (nums[j] > max)
            {
                max = nums[j];
            }
            if (min == minK && max == maxK)
            {
                ans++;
            }
        }
    }
    return ans;
    
}
int main() {
    vector<int> nums = {1,1,1,1};
    int minK = 1;
    int maxK = 1;
    cout << countSubarrays(nums, minK, maxK);
    return 0;
}