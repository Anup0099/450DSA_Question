#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int m = matrix[0].size(), n = matrix.size();
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] > target)
        {
            j--;
        }
        else if (matrix[i][j] < target)
        {
            i++;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main() {}