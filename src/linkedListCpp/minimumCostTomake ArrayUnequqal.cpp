#include <bits/stdc++.h>
using namespace std;
// You are given two 0-indexed integer arrays nums1 and nums2, of equal length n.

// In one operation, you can swap the values of any two indices of nums1. The cost of this operation is the sum of the indices.

// Find the minimum total cost of performing the given operation any number of times such that nums1[i] != nums2[i] for all 0 <= i <= n - 1 after performing all the operations.

// Return the minimum total cost such that nums1 and nums2 satisfy the above condition. In case it is not possible, return -1.
long long minimumTotalCost(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        if (nums1[i] != nums2[i])
            v.push_back({nums1[i], nums2[i]});
    }
    sort(v.begin(), v.end());
    long long ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int j = i;
        while (j < v.size() && v[j].first == v[i].first)
            j++;
        ans += (long long)(j - i) * v[i].first;
        i = j - 1;
    }
    return ans;
}

int main() {}