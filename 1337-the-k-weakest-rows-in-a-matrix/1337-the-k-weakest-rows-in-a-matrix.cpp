class Solution
{
    public:
        vector<int> kWeakestRows(vector<vector < int>> &mat, int k)
        {
           	  int count = 0;
    int n = mat.size();
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if(mat[i][j] == 1)
            {
                count++;
            }
        }
        v.push_back({count, i});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(v[i].second);
    }
    return ans;
        }
};