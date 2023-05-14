#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &nums, int p, int diff)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] - nums[i - 1] <= diff)
        {
            p--;
            i++;
        }
    }
    return p <= 0;
}
int minimizeMax(vector<int> nums, int p)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int low = 0;
    int ans = 0;
    int high = nums[0] - nums[n];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isPossible(nums, p, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}