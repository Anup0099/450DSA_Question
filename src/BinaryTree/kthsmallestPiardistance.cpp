#include <bits/stdc++.h>
using namespace std;
int smallestDistancePair(vector<int> &nums, int k)
{
    // // brute force
    // vector<int> ans;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         ans.push_back(abs(nums[i] - nums[j]));
    //     }
    // }
    // sort(ans.begin(), ans.end());
    // return ans[k - 1];
    // // binary search
    sort(nums.begin(), nums.end());
    int low = 0, high = nums[nums.size() - 1] - nums[0];
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int count = 0, left = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            while (nums[right] - nums[left] > mid)
            {
                left++;
            }
            count += right - left;
        }
        if (count < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}
int main()
{
    vector<int> nums = {1, 2, 5, 10};   
    int k = 4;
    cout << smallestDistancePair(nums, k);
    return 0;
}