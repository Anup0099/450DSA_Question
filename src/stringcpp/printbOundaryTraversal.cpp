#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> v)
{
    int r = v.size(), c = v[0].size();
    if (r == 1)
    {
        for (int i = 0; i < r; i++)
        {
            cout << v[i][0] << " ";
        }
    }
    else if (c == 1)
    {
        for (int i = 0; i < c; i++)
        {
            cout << v[0][i];
        }
    }
    else
    {
        for (int i = 0; i < c; i++)
        {
            cout << v[0][i] + " ";
        }
        for (int i = 1; i < r; i++)
        {
            cout << v[i][c - 1] + " ";
        }
        for (int i = c - 2; i >= 0; i--)
        {
            cout << v[r - 1][i] + " ";
        }
        for (int i = r - 2; i >= 1; i--)
        {
            cout << v[i][0] + " ";
        }
    }
}
int main() {}