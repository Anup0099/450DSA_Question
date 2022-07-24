#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    if (numRows == 0)
        return res;
    vector<int> first(1, 1);
    res.push_back(first);
    for (int i = 1; i < numRows; i++)
    {
        vector<int> curr(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            curr[j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        res.push_back(curr);
    }
    return res;
}
int main()
{
}