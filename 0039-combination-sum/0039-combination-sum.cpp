class Solution
{
    public:
      void findCombination(vector<int> &arr, int ind, int target, vector<vector< int >> &ans, vector< int > &ds)
        {
            if (ind >= arr.size())
            {
                if (target == 0)
                {
                    ans.push_back(ds);
                }
                return;
            }
           	// take step
            if (arr[ind] <= target)
            {
                ds.push_back(arr[ind]);
                findCombination(arr, ind, target - arr[ind], ans, ds);
                ds.pop_back();
            }
           	// not take step
            findCombination(arr, ind + 1, target, ans, ds);
          
        }
    vector<vector < int>> combinationSum(vector<int> &arr, int target)
    {
        int n = arr.size();
        vector<int> ds;
        vector<vector < int>> ans;
         findCombination(arr, 0, target, ans, ds);
        return ans;
    }
};