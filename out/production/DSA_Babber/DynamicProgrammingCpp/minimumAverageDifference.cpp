#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed integer array nums of length n.

// The average difference of the index i is the absolute difference between the average of the first i + 1 elements of nums and the average of the last n - i - 1 elements. Both averages should be rounded down to the nearest integer.

// Return the index with the minimum average difference. If there are multiple such indices, return the smallest one.

// Note:

// The absolute difference of two numbers is the absolute value of their difference.
// The average of n elements is the sum of the n elements divided (integer division) by n.
// The average of 0 elements is considered to be 0.
int minimumAverageDifference(vector<int> &nums)
{
    long long total_sum = 0;
    for (int ele : nums)
    {
        total_sum = total_sum + (long long)(ele);
}

    long long ans = LLONG_MAX;
    long long j = 0;
    long long cur_sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        cur_sum = cur_sum + (long long)nums[i];
        long long left = 0, right = 0;
        left = (cur_sum) / (i + 1);
        if (i < nums.size() - 1)
            right = (total_sum - cur_sum) / (nums.size() - i - 1);
        int diff = abs(left - right);
        if (diff < ans)
        {
            ans = diff;
            j = i;
        }
    }
    return j;
}
int main() {}