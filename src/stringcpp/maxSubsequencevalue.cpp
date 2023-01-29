#include <bits/stdc++.h>
using namespace std;
// You are given two 0-indexed integer arrays nums1 and nums2 of equal length n and a positive integer k. You must choose a subsequence of indices from nums1 of length k.

// For chosen indices i0, i1, ..., ik - 1, your score is defined as:

// The sum of the selected elements from nums1 multiplied with the minimum of the selected elements from nums2.
// It can defined simply as: (nums1[i0] + nums1[i1] +...+ nums1[ik - 1]) * min(nums2[i0] , nums2[i1], ... ,nums2[ik - 1]).
// Return the maximum possible score.

// A subsequence of indices of an array is a set that can be derived from the set {0, 1, ..., n-1} by deleting some or no elements.
long long maxScore(vector<int> &nums1, vector<int> &nums2, int k)
{
    int n = nums1.size();
    int m = nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    long long ans = 0;
    for (int i = 0; i <= k; i++)
    {
        int j = k - i;
        if (i > n || j > m)
        {
            continue;
        }
        long long sum1 = 0;
        long long sum2 = 0;
        for (int x = 0; x < i; x++)
        {
            sum1 += nums1[x];
        }
        for (int x = 0; x < j; x++)
        {
            sum2 += nums2[x];
        }
        long long sum = sum1 + sum2;
        long long minval = min(sum1, sum2);
        ans = max(ans, sum * minval);
    }
    return ans;
}

int main() {}