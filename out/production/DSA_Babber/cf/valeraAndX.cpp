#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n][n];
    int flag = 0;
    int l = n - 1, diag_count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char diagonal = arr[0][0];
            char match = arr[0][1];
            // then x will not form in matrix

            if (diagonal == match)
            {
                flag = 1;
                break;
            }
            if (arr[i][j] != diagonal && arr[i][j] != match)
            {
                flag = 1;
                break;
            }

            if (arr[i][i] != diagonal)
            {
                flag = 1;
                break;
            }
            if (arr[i][j] == diagonal)
            {
                diag_count++;
            }
            int m = i;
            if (arr[m][j] != diagonal)
            {
                flag = 1;
                break;
            }
        }
        l--;
    }
    if (flag == 1)
    {
        cout << "NO";
    }
    else if (flag == 0)
    {
        if (diag_count != (n * 2) - 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
}
