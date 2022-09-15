#include <bits/stdc++.h>
using namespace std;
// You are given an integer array nums of length n, and an integer array queries of length m.

// Return an array answer of length m where answer[i] is the maximum size of a subsequence that you can take from nums such that the sum of its elements is less than or equal to queries[i].

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{

    int n = nums.size();
    int m = queries.size();

    sort(nums.begin(), nums.end());
    int sum = 0;
    vector<int> pre_sum;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        pre_sum.push_back(sum); // storing prefix sum
    }
    for (int i = 0; i < pre_sum.size(); i++)
    {
        cout << pre_sum[i] << " ";
    }
    cout << endl;
    vector<int> ans(m, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (pre_sum[j] <= queries[i])
                ans[i] = j + 1; // wherever we got the max subsequence sum for i just update that
            else
                break;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> queries = {3, 10, 6, 7, 9};
    vector<int> ans = answerQueries(nums, queries);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}