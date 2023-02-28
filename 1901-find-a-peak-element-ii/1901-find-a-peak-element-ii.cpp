class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
          int n = mat.size();
    int m = mat[0].size();
    vector<int> ans;
    int low = 0;
    int high = m - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int maxEle = INT_MIN;
        int maxEleIdx = -1;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][mid] > maxEle)
            {
                maxEle = mat[i][mid];
                maxEleIdx = i;
            }
        }
        if (mid == 0 || mid == m - 1)
        {
            if (mid == 0)
            {
                if (mat[maxEleIdx][mid] > mat[maxEleIdx][mid + 1])
                {
                    ans.push_back(maxEleIdx);
                    ans.push_back(mid);
                    return ans;
                }
            }
            else
            {
                if (mat[maxEleIdx][mid] > mat[maxEleIdx][mid - 1])
                {
                    ans.push_back(maxEleIdx);
                    ans.push_back(mid);
                    return ans;
                }
            }
        }
        else
        {
            if (mat[maxEleIdx][mid] > mat[maxEleIdx][mid - 1] && mat[maxEleIdx][mid] > mat[maxEleIdx][mid + 1])
            {
                ans.push_back(maxEleIdx);
                ans.push_back(mid);
                return ans;
            }
        }
        if (mid > 0 && mat[maxEleIdx][mid - 1] > mat[maxEleIdx][mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
    }
};