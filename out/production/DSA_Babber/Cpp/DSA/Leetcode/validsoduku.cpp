#include <bits/stdc++.h>
using namespace std;
bool isValidSodoku(vector < vector, string >> &board)
{
    unordered_set<char> s;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            char current = board[i][j];
            if (current != '.')
            {

                s.add(current + "found in a row" + i);
                s.add(current + "found in a column" + j);
                s.add(current + "found in a box" + i / 3 + "-" + j / 3);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int ans = k / x;
        if (ans > n)
        {
            cout << n << endl;
        }
        else
        {

            cout << ans << endl;
        }
    }
}