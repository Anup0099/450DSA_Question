#include <bits/stdc++.h>
using namespace std;
int minRow(int N, int M, vector<vector<int>> A)
{
    // int n=A.size();
    // int j = M - 1, row = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     bool flag = false;
    //     while (j >= 0 and A[i][j] == 1)
    //     {
    //         j--;
    //         flag = true;
    //     }
    //     if (flag)
    //     {
    //         row = i;
    //     }
    // }
    // if (row == -1)
    // {
    //     return -1;
    // }
    // return row;

    int count = 0;
    int index = 0;
    int ans = M;
    for (int i = N - 1; i >= 0; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1)
            {
                count++;
            }
        }
        if (count <= ans)
        {
            index = i;
        }
        ans= min(ans,count);
        count=0;
    }
    return index+1;
}
int main() {}