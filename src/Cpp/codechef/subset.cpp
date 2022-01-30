#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int arr[n];
        int flag = 0;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            int temp;
            cin >> temp;
            if ((temp - arr[i] != x) && (temp - arr[i] != y)) flag=1;
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "Yes" << endl;
    }
}