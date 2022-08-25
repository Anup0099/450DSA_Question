#include <bits/stdc++.h>
using namespace std;
int peakElelment(int arr[], int n)
{
    int l = 0, h = n - 1;
    int mid;
    while (l <= h)
    {
        mid = l + (h - 1) / 2;
        if ((mid==0 || arr[mid - 1] <= arr[mid]) &&(mid==n-1 ||arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid >0 && arr[mid - 1] > arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return mid;
}
int main() {}