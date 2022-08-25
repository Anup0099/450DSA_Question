#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // ll n, k;
    // cin >> n >> k;
    // vector<int> req(n), have(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> req[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> have[i];
    // }
    ll n=3, k=1;
    vector<int> req={2,1,4};
    vector<int> have={11,3,16};
    ll low = 0, high = 2001;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        ll z = 0, cost = 0;
        for (int i = 0; i < n; i++)
        {
            cost += max(req[i] * mid - have[i], z);
        }
        if (cost <= k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << high << endl;
}