#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    sort(arr, arr + m);
    for (int i = 0; i < m; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
    int minsums=INT_MAX;
    for (int i = 0; i < m; i++)
    {   int minsum=0;
        for (int j = i; j < n; j++)
        {
            minsum = arr[j]-minsum;
            
        }
        minsums = min(minsum,minsums);

    }
    cout << minsums << endl;
}