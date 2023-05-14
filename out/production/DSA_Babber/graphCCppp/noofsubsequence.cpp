#include <bits/stdc++.h>
using namespace std;

int noOfsubseq(vector<int> &nums, int target)
{
    sort(begin(nums), end(nums));
    int mod = 1e9 + 7;
    int count = 0;
    int n = nums.size();
    vector<int> pow2(n, 1);
    for (int i = 0; i < n; i++)
    {
        pow2[i] = pow2[i - 1] * 2 % mod;
    }
    for (auto it : pow2)
    {
        cout << it << " ";
    }
    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (nums[left] + nums[right] > target)
        {
            right--;
        }
        else
        {
            count += pow2[right - left];
            count %= mod;
            left++;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}