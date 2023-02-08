#include <bits/stdc++.h>
using namespace std;
// striver longest common subsequence tabulation approach
int longestIncreasingSubsequence(int arr[], int n)
{
    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));
    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int prev_index = ind - 1; prev_index >= -1; prev_index--)
        {
            int notTake = 0 + dp[ind + 1][prev_index + 1];
            int take = 0;
            if (prev_index == -1 || arr[ind] > arr[prev_index])
            {
                take = 1 + dp[ind + 1][ind + 1];
            }
            dp[ind][prev_ind + 1] = max(notTake, take);
        }
    }
    return dp[0][0];
}
int main() {}