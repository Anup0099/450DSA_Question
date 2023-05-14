#include <bits/stdc++.h>
define ll long long
define ld long double
define pb push_back using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> nums(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> nums[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = 0; j < m; j++)
            {
                int flag2 = 0;
                for (int k = 0; k < n; k++)
                {
                    if (nums[k][j] > nums[i][j])
                    {
                        flg2 = 0;
                    }
                }
                if (flag2 == 1)
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            count++;
        }
        return count;
    }
}