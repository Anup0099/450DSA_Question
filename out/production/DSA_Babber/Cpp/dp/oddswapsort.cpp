#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (size_t i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int c = 1;

        for (size_t i = 1; i < n; i++)
        {

            if (arr[i] <= arr[i + 1])
            {
                c++;
            }

            else if ((arr[i] + arr[i + 1]) % 2 != 0)
            {
                swap(arr[i], arr[i + 1]);
                c++;
            }
        }
        if (c == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}