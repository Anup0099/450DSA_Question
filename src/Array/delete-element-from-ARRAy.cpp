#include <bits/stdc++.h>
using namespace std;
int delete (int arr[], int n, int x)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n)
    {
        return n;
    }
    for (int j = i; j < n; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}
int main() {
    int arr[] = {3, 8, 12, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    n = delete (arr, n, x);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}