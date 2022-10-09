#include <bits/stdc++.h>
using namespace std;
void printSpiral(int mat[4][4], int R, int C)
{
    int top = 0, left = 0, bottom = R - 1, right = C - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        bottom--;
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}
int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    printSpiral(mat, 4, 4);
    return 0;
}
