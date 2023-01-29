#include <bits/stdc++.h>
using namespace std;
int findMIn(vector<int> &nums)
{
    // int mini = *min_element(nums.begin(), nums.end());
    // return mini;
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (nums[mid] > nums[r])
        {

            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    return nums[r];
}
int main() {}