#include <bits/stdc++.h>
using namespace std;
// There are n participants in a competition, participant i having a strength of si.

// Every participant wonders how much of an advantage they have over the other best participant. In other words, each participant i wants to know the difference between si and sj, where j is the strongest participant in the competition, not counting i (a difference can be negative).

// So, they ask you for your help! For each i (1≤i≤n) output the difference between si and the maximum strength of any participant other than participant i.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<uint32_t> v;
        uint32_t ans = 0;

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                
                v.push_back(ans);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}