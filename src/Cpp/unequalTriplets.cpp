#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed array of positive integers nums. Find the number of triplets (i, j, k) that meet the following conditions:

// 0 <= i < j < k < nums.length
// nums[i], nums[j], and nums[k] are pairwise distinct.
// In other words, nums[i] != nums[j], nums[i] != nums[k], and nums[j] != nums[k].
// Return the number of triplets that meet the conditions.
int unequalTriplets(vector<int> &nums)
{

    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << "i: " << i << endl;
        for (int j = i + 1; j < n; j++)

        {
            cout << "j: " << j << endl;
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k])
                {
                    count++;
                }
                cout << "k:" << k;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {4, 4, 2, 4, 3};
    cout << unequalTriplets(nums);
}