#include <bits/stdc++.h>
using namespace std;
int averageValue(vector<int> &nums)
{
    vector<int> num;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0 and nums[i] % 3 == 0)
        {
            num.push_back(nums[i]);
        }
        else
        {
            continue;
        }
    }
    int sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i];
    }
    return sum == 0 ? 0 : sum / num.size();
}
int main() {}