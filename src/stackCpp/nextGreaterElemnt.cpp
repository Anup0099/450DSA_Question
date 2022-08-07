#include <bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ngee(n, -1);
    stack<int> s;
    //2*n-1 meaning circular array is used whenever circular array is used use % n
    //for cuircular arrray use i= 2*n-1 and for normal array use i=n-1
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= nums[i % n])
        {
            s.pop();
        }
        if (i < n)
        {
            if (!s.empty())
            {
                ngee[i] = s.top();
            }
        }
        s.push(nums[i % n]);
    }
    return ngee;
}

int main() {
    vector<int> nums = {4, 3, 2, 1};
    vector<int> ngee = nge(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << ngee[i] << " ";
    }
    cout << endl;
    return 0;
}