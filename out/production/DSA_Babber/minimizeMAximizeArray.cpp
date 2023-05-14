#include <bits/stdc++.h>
define ll long long
    define ld long double
        define pb push_back using namespace std;
bool isValid(vector<int> &nums, int mid)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > mid)
        {
            return false;
        }
        long long buffer = mid - nums[i];
        nums[i + 1] = nums[i] - buffer;
    }
    return nums[n - 1] <= mid;
}
int minimizeArrayValue(vector<int> &nums)
{
    int n = nums.size();
    int maxl = 0;
    int maxr = *max_element(nums.begin(), nums.end());
    int result = 0;
    while (maxl <= maxr)
    {
        int mid = (maxl + maxr) / 2;
        if (isValid(nums, mid))
        {
            result = mid;
            maxr = mid - 1;
        }
        else
        {
            maxl = mid + 1;
        }
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}