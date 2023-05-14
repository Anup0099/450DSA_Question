#include <bits/stdc++.h>
using namespace std;
// You are given two 0-indexed integer arrays nums and divisors.

// The divisibility score of divisors[i] is the number of indices j such that nums[j] is divisible by divisors[i].

// Return the integer divisors[i] with the maximum divisibility score. If there is more than one integer with the maximum score, return the minimum of them.
int maxDivScore(vector<int> &nums, vector<int> &divisors)
{
    int n = nums.size();
    int m = divisors.size();
    int maxScore = 0;
    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] % divisors[i] == 0)
            {
                count++;
            }
        }
        if (count > maxScore)
        {
            maxScore = count;
            ans = divisors[i];
        }
    }
    vector<int> a;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] % divisors[i] == 0)
            {
                count++;
            }
        }
        if (count == maxScore)
        {
            ans.push_back(divisors[i]);
        }
    }
    sort(a.begin(), a.end());
    return a[0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}