#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) != m.end())
        {
            return true;
        }
        else
        {
            m.insert({nums[i], i});
        }
    }
    return false;
}
int maxSubArray(vector<int> &nums)
{
    int maxsum = INT_MAX;
    int cursum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        cursum = cursum + nums[i];
        if (cursum > maxsum)
        {
             maxsum=cursum;
        }

        if (cursum < 0)
        {
            cursum = 0;
        }
    }
    return maxsum;
}
int main()
{
    vector<int> numbers = {1, 2, 3, 4};
    cout << containsDuplicate(numbers) << endl;
}