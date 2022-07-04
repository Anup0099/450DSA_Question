#include <bits/stdc++.h>
using namespace std;
int getMinDistance(vector<int> &nums, int target, int start)
{
    int ans = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {           

        if (nums[i] == target)
        {
            ans = min(ans,abs(i - start));
           
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    nums = {1};
    int target = 1;

    int start = 9;

    cout << getMinDistance(nums, target, start);
    return 0;
}