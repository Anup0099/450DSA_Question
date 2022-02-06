#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
long long smallestNumber(long long num)
{
}
vector<int> sortEvenOdd(vector<int> &nums)
{

    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        if (nums.size() < 2)
        {
            return nums;
        }
    }
    return nums;
}

int minimumSum(int n)
{
    vector<int> v;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    int ans = v[0] * 10 + v[3];
    int an1 = v[1] * 10 + v[2];
    return ans + an1;
}
vector<int> pivotArray(vector<int> &nums, int pivot)
{
    vector<int> a, b, c;
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        if (nums[i] < pivot)
        {
            a.push_back(nums[i]);
        }
        else if (nums[i] == pivot)
        {
            b.push_back(nums[i]);
        }
        else if (nums[i] > pivot)
        {
            c.push_back(nums[i]);
        }
    }
    b.insert(b.end(), c.begin(), c.end());
    a.insert(a.end(), b.begin(), b.end());

    return a;
}
int main()
{
    // vector<int> nums = {4, 1, 2, 3};
    // vector<int> v = sortEvenOdd(nums);
    // for (auto c : nums)
    // {
    //     cout << c << endl;
    // }
}