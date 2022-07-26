#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &arr, int n, int k)
{
    int prefix[n];
    int max = 0;
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int sum = 0;

    for (int i = 0; i < n - k; i++)
    {
        int start = i, end = i + k - 1;
        int sum = prefix[end];
        if (sum - 1 > 0)
        {
            sum = sum - prefix[start - 1];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    return max;
}
int subarray(vector<int> arr, int k)
{
    int max = INT_MIN, sum = 0;

    //max is used   to store the sum of elements in current window and sum is used to store the sum of elements in previous window.
    for (int i = 0; i < k ; i++)
    {
        sum += arr[i];
    }
    max = sum;
    cout<<sum<<endl;
    int left = 0, right = k-1;
    while (right <= arr.size() - 2)
    {
        right++;
        sum += arr[right];
        sum -= arr[left];
        left++;
        if (sum > max)
        {
            max = sum;
        }
    }
    return max;
}
int main()
{
    vector<int> arr = {2,1,2,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int ans = subarray(arr, k);
    cout << ans;
}