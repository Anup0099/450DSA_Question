#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            res = max(res, count);
        }
    }
    return res;
}

 
int main() {}