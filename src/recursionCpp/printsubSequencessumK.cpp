#include <bits/stdc++.h>
using namespace std;
void f(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (index == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    // take the particular index into the subsequence
    ds.push_back(arr[index]);
    s += arr[index];
    f(index + 1, ds, s, sum, arr, n);

    // don't take the particular index into the subsequence
    s -= arr[index];
    ds.pop_back();
    f(index + 1, ds, s, sum, arr, n);
}
bool fs(int ind, vector<int> v, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
    }
    else
    {
        return false;
    }
    v.push_back(arr[ind]);
    s += arr[ind];
    if (fs(ind + 1, v, s, sum, arr, n) == true)
    {
        return true;
    }

    s -= arr[ind];
    v.pop_back();
    if (fs(ind + 1, v, s, sum, arr, n) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    f(0, v, 0, 10, arr, n);
    cout << endl;
    fs(0, v, 0, 10, arr, n);
    return 0;
}