#include <bits/stdc++.h>
using namespace std;

findMedian(vector<vector<int>> &A)
{
    vector<int> v;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            v.push_back(A[i][j]);
        }
    }
    sort(v.begin(), v.end());
    int mid = v.size() / 2;
    binary_search(v.begin(), v.end(), v[mid]);
    return v[mid];
}
int smallerthanEqual(vector<int> &row, int mid)
{
    int l = 0, h = row.size() - 1;
    while (l <= h)
    {
        int mid = (l + h) >> 1;
        if (row[mid] <= mid)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return l;
}

int findmedian(vector<vector<int>> &A)
{
    int low = 1;
    int high = 1e9;
    int n = A.size();

    int m = A[0].size();
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += smallerthanEqual(A[i], mid);
        }
        if (cnt <= (n * m) / 2)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
{
    int cnt = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < arr2.size(); j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    vector<vector<int>> A = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    cout << findMedian(A);
    return 0;
}