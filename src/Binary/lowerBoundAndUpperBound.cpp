#include <bits/stdc++.h>
using namespace std;
vector<int> firstAndLast(vector<int> &arr, int n, int x)
{
    if (!binary_search(arr.begin(), arr.end(), x))
    {
        return {-1, -1};
    }
    int first = -1, last = -1;
    first = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    last = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
    return {first, last};
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << *lower_bound(v.begin(), v.end(), 5) << endl;
    cout << *upper_bound(v.begin(), v.end(), 5);
}