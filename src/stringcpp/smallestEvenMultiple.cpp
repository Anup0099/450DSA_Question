#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        int ans = 0;
        if (n % 2 == 0)
        {
            return n;
        }
        else
        {
            n * 2;
        }
    }
    bool isThree(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int findGCD(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = gcd(nums.front(), nums.beack());
        return ans;
    }
}

int
main()
{
}