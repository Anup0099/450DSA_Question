#include <bits/stdc++.h>
using namespace std;

bool searhMatrix(vector<vector<int>> &matrix, int target)
{
    // simple for loop in 2d array to find the answe but the time complexity will be n^2
    // we have to use binary search to find the target
    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0, j = n - 1;

    // while (i < m and j >= 0)
    // {
    //     if (matrix[i][j] > target)
    //     {
    //         j--;
    //     }
    //     else if (matrix[i][j] < target)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         return true;
    //     }
    // }
    // return false;
    int start = 0;
    int end = m * n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (matrix[mid / n][mid % n] > target)
        {
            end = mid - 1;
        }
        else if (matrix[mid / n][mid % n] < target)
        {
            start = mid + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main() {}