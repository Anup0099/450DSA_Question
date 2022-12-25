class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
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
};