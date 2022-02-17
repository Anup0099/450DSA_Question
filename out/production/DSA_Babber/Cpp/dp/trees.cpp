#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int arr[n];
        int arr1[n + 1];
        for (size_t i = 0; i < n + 1; i++)
        {
            arr1[i] = 0;
        }

        for (size_t i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arr1[i] = arr1[i - 1] + arr[i];
        }
        sort(arr1, arr1 + n + 1);
        cout << arr1[n] + x << endl;
    }
}