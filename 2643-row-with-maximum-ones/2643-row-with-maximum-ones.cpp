class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
    int n = mat.size();
    int m = mat[0].size();
    int maxOnes = 0;
    int row = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxOnes)
        {
            maxOnes = count;
            row = i;
        }
    }
    ans.push_back(row);
    ans.push_back(maxOnes);
        return ans;
    }
};