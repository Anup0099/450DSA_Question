#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{

    int count = 0;
    int max = nums.size() / 2;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            return nums[i];
        }
    }
    return 0;
}
int main()
{
    
}