#include <bits/stdc++.h>
using namespace std;
// There's a chessboard of size n×n. m rooks are placed on it in such a way that:

// no two rooks occupy the same cell;
// no two rooks attack each other.
// A rook attacks all cells that are in its row or column.

// Is it possible to move exactly one rook (you can choose which one to move) into a different cell so that no two rooks still attack each other? A rook can move into any cell in its row or column if no other rook stands on its path.

// Input
// The first line contains a single integer t (1≤t≤2000) — the number of testcases.

// The first line of each testcase contains two integers n and m (1≤n,m≤8) — the size of the chessboard and the number of the rooks.

// The i-th of the next m lines contains two integers xi and yi (1≤xi,yi≤n) — the position of the i-th rook: xi is the row and yi is the column.

// No two rooks occupy the same cell. No two rooks attack each other.

// Output
// For each testcase, print "YES" if it's possible to move exactly one rook into a different cell so that no two rooks still attack each other. Otherwise, print "NO"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x - 1][y - 1] = 1;
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 0)
                {
                    int flag1 = 0;
                    for (int k = 0; k < n; k++)
                    {
                        if (a[i][k] == 1)
                        {
                            flag1 = 1;
                            break;
                        }
                    }
                    for (int k = 0; k < n; k++)
                    {
                        if (a[k][j] == 1)
                        {
                            flag1 = 1;
                            break;
                        }
                    }
                    if (flag1 == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


