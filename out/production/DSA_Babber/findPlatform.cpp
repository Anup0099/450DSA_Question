#include <bits/stdc++.h>
using namespace std;
int findPlatform(vector<int> arr, vector<int> dep, int n)
{
    sort(arr.begin(), arr.end());
    sort(dep.begin().dep.end());
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            plat_needed++;
            i++;
        }
        else if (arr[i] > dep[j])
        {
            plat_needed--;
            j++;
        }
        if (plat_needed > result)
        {
            result = plat_needed;
        }
    }

    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}