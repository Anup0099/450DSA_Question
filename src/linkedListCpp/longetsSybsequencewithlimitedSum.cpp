#include <bits/stdc++.h>
using namespace std;
vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int m = queries.size();
   
    vector<int> ans(m);
    vector<int> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        int lb = lower_bound(prefixSum.begin(), prefixSum.end(), queries[i]) - prefixSum.begin();
        cout << lb << "lower bound ";
        if(lb==n+1){
            ans[i]=n;
            continue;
        }
        if(prefixSum[lb]>queries[i]) lb--;
        ans[i]=lb;
    }
    return ans;
}

int main() {
    vector<int> nums = {4,5,2,1};
    vector<int> queries = {3,10,21};
    vector<int> ans = answerQueries(nums, queries);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}