#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> r(numRows);
    for (size_t i = 0; i < numRows; i++)
    {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
        for (size_t j = 1; j < i; j++)
        {
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
    }
    return r;
}
int main()
{
    vector<vector<int>>vect= generate(5);
   
   for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
    
}