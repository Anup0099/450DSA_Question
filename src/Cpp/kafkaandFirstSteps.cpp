#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int max_sum = INT_MIN, count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > max_sum)
        {
            max_sum = count;
        }
    }
    cout << max_sum;
    
}