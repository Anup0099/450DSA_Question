#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> nums)
{
    int n = nums.size();
    vector<int> v;
    stack<int> s;
    s.push(nums[n - 1]);
    v.push_back(-1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && nums[i] >= s.top())
        {
            s.pop();
        }
        if (s.empty())
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(s.top());
        }
        s.push(nums[i]);
    }
    reverse(v.begin(), v.end());

    return v;
}
int main()
{
    vector<int> nums = {1, 3, 2, 4};
    vector<int> v = nextGreater(nums);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}