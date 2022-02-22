#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
            {
                arr[i]=arr[i+1];
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
}