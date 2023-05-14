#include <bits/stdc++.h>
using namespace std;
int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
{
    unordered_map<int, int> mpr, mpc, mprc, mpcc;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); ++j)
        {
            mpr[mat[i][j]] = i;
            mpc[mat[i][j]] = j;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        int n = arr[i];
        mprc[mpr[n]]++;
        mpcc[mpc[n]]++;
        if (mprc[mpr[n]] == mat[0].size() || mpcc[mpc[n]] == mat.size())
            return i;
    }
    return -1;
}
bool iscomplete(int m1, vector<vector<int>> &mat)
{
    int n = arr.size();
    int m = mat.size();
    int k = mat[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (m1 == mat[i][j])
            {
                mat[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < k; j++)
        {
            if (mat[i][j] == 0)
                count++;
        }
        if (count == mat[i].size())
            return true;
    }

    for (int i = 0; i < k; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (mat[j][i] == 0)
                count++;
        }
        if (count == mat.size())
            return true;
    }
    return false;
}
int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
{
    int n = arr.size();
    int m = mat.size();
    int k = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        if (iscomplete(arr[i], mat))
        {
            return i;
        }
    }
    return 0;
}
int arraySign(vector<int> &nums)
{
     int sign = 1;
        
        for (int num : nums) {
            if (num == 0) {
                return 0;
            } else if (num < 0) {
                sign = -sign;
            }
        }
        
        return sign;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}