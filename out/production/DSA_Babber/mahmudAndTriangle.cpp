#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    if (n < 3)
    {
        cout << "NO" << endl;
    }
    sort(arr, arr + n);
    bool flag= 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2] )

        {
            flag = 1;
            break;
        }
        
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}