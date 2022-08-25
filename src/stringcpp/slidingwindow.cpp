#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    // n must be greater
    if (n < k)
    {
        cout << "Invalid";
        return -1;
    }

    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];
    cout << "max_sum = " << max_sum << endl;

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    for (int i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        cout << window_sum << endl;
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    cout << "Maximum sum is " << maxSum(arr, n, k);
    return 0;
}