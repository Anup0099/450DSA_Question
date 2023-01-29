#include <bits/stdc++.h>
using namespace std;
// You are given two integer arrays nums1 and nums2 of equal length n and an integer k. You can perform the following operation on nums1:

// Choose two indexes i and j and increment nums1[i] by k and decrement nums1[j] by k. In other words, nums1[i] = nums1[i] + k and nums1[j] = nums1[j] - k.
// nums1 is said to be equal to nums2 if for all indices i such that 0 <= i < n, nums1[i] == nums2[i].

// Return the minimum number of operations required to make nums1 equal to nums2. If it is impossible to make them equal, return -1.
// 4314
// 1371
// k=3
// output=2

long long minOperations(vector<int> &nums1, vector<int> &nums2, int k)
{
    int n = nums1.size();
    int m = nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(),nums2.end());
   
    
}
int main() {
    vector<int> nums1 = {4,3,1,4};
    vector<int> nums2 = {1,3,7,1};
    int k = 3;
    cout << minOperations(nums1, nums2, k);
}