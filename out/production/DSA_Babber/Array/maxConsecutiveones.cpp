#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutive(vector<int> &nums)
{
    int max = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > max)
        {
            max = count;
        }
    }
    return max;
}
int main() {}