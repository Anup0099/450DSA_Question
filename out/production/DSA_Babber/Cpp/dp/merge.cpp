#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
const int n = 1e5;
int a[n];

void merge(int l, int r, int mid)
{
    int l_sz = mid - l - 1;
    int L[l_sz + 1];
    int r_sz = r - mid;
    int R[r_sz + 1];
    for (size_t i = 0; i < l_sz; i++)
    {
        L[i] = a[i + l];
    }
    for (size_t i = 0; i < r_sz; i++)
    {
        R[i] = a[i + mid + 1];
    }
    L[l_sz] = R[r_sz] = INT16_MAX;
    int l_i = 0;
    int r_i = 0;
    for (size_t i = 0; i <= r; i++)
    {
        if (L[l_i] <= R[r_i])
        {
        }
        else
        {

            a[l] = R[l_i];
            r_i++;
        }
    }
}

void mergeSort(int l,int r){
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);
}
int main()
{
}