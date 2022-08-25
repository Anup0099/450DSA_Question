#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        if (k % 2)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i += 2)
            {
                cout << i << " " << i + 1 << endl;
            }
        }
        else
        {
            if (k % 4 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                int flag = 0;
                for (int i = 1; i < n; i += 2)
                {
                    if (flag)
                    {
                        cout << i << " " << i + 1 << endl;
                    }
                    else
                    {
                        cout << i + 1 << " " << i << endl;
                    }
                    flag = 1 - flag;
                }
            }
        }
    }
}