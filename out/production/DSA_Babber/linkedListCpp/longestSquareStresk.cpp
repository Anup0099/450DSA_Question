#include <bits/stdc++.h>
using namespace std;
// You are given an integer array nums. A subsequence of nums is called a square streak if:

// The length of the subsequence is at least 2, and
// after sorting the subsequence, each element (except the first element) is the square of the previous number.
// Return the length of the longest square streak in nums, or return -1 if there is no square streak.

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

int longestSquareStreak(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        while (j < n && nums[j] == nums[j - 1] + 1)
        {
            j++;
        }
        if (j - i >= 2)
        {
            ans = max(ans, j - i);
        }
        i = j - 1;
    }
    return ans;
}
int main() {}