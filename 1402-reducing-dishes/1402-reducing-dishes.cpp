class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
    sort(satisfaction.begin(), satisfaction.end());
    // int time = 1;
    // int index = 0;
    // int sum = 0;
    // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    // return solve(satisfaction, index, time,dp);
    // bottom up approach
    vector<vector<long long>> dp(5001, vector<long long>(5001, INT_MIN));
    for (int i = 0; i < 5001; i++)
    {
        // time =0 pe nahi suru hoga khana banana
        dp[i][0] = 0;
    }
    dp[0][1] = satisfaction[0];
    for (int i = 1; i < n; i++)
    {
        for (int time = 1; time <= n; time++)
        {
            long long include = satisfaction[i] * time + dp[i - 1][time - 1];
            long long exclude = dp[i - 1][time];
            dp[i][time] = max(include, exclude);
        }
    }
    // asks for any time
    long long ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans = max(ans, dp[n - 1][i]);
    }
    return ans; 
    }
};