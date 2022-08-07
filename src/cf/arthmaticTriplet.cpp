#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

// i < j < k,
// nums[j] - nums[i] == diff, and
// nums[k] - nums[j] == diff.
// Return the number of unique arithmetic triplets.
int arithmeticTriplets(vector<int> &nums, int diff)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
                {
                    count++;
                }
            }
        }
    }
    return count;

}
int main() {}