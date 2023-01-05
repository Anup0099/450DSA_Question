#include <bits/stdc++.h>
using namespace std;

int lb(int arr[], int n, int x)
{
    // if we do not substract then it will return the address of the element
    int lb = lower_bound(arr, arr + n, x) - arr;
}
int findFloor(vector<long long> v, long long n, long long x)
{

    // Your code here

    long long low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    int low = 0, high = n - 1, ans = -1;
    pair<int, int> p;
    sort(arr, arr + n);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            p.first = arr[mid];
            p.second = arr[mid];
            return p;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    if (ans == -1)
    {
        p.first = -1;
        p.second = arr[0];
        return p;
    }
    else if (ans == n - 1)
    {
        p.first = arr[n - 1];
        p.second = -1;
        return p;
    }
    else
    {
        p.first = arr[ans];
        p.second = arr[ans + 1];
        return p;
    }

}
int main() {
    int arr[] = {15, 6, 8, 9, 6, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    pair<int, int> p = getFloorAndCeil(arr, n, x);
    cout << p.first << " " << p.second;
    return 0;   
}