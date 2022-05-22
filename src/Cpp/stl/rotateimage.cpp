#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    int t;
    cin >> t;
    while (
        t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            s.push_back(s[i]);
            cout<<s[i]<<endl;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1] || s[i] == s[i - 1])
            {
                cout << "Invalid" << endl;
                break;
            }
            else if (s[0] == "T")
            {
                cout << "Invalid" << endl;
                break;
            }
            else
            {
                cout << "Valid" << endl;
            }
        }
    }
}