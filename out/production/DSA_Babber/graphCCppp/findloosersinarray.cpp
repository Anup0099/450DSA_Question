#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int>;
        int res = 0;
        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;
            x -= i;
            res += a[x];
            a[x]++;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (i < j && arr[j] - arr[i] == j - i)
        //         {

        //             count++;
        //         }
        //     }
        // }

        cout << res << endl;
    }
}