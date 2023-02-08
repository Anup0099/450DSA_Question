#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int it = 0; it < n; it++)
    {
        if (v[it] > k)
        {
            count++;
        }
    }
    cout << count;
}