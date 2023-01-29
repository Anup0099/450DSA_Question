#include <bits/stdc++.h>
using namespace std;

vector<int> twosum2(vector<int> &arr, int k)
{
    vector<int> v;
    int n = arr.size();
    int i = 0;
    j = n - 1;
    while (i > j)
    {
        if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else if (arr[i] + arr[j] < k)
        {
            i++;
        }
        else
        {
            return {i + 1, j + 1};
        }
    }
    return v;
}
int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> arr = twosum2(v, target);
}