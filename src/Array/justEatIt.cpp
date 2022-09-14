#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        vector<int> v;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int max_sum = INT_MIN;
        int max_sum2 = INT_MIN;
        int sum = 0;
        int sum2 = 0;
        for (int i = 1; i < v.size(); i++)
        {
            sum += v[i];
            if (sum > max_sum)
            {
                max_sum = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        for (int i = 0; i < v.size() - 1; i++)
        {
            sum2 += v[i];
            if (sum2 > max_sum2)
            {
                max_sum2 = sum2;
            }
            if (sum2 < 0)
            {
                sum2 = 0;
            }
        }
        // cout << max_sum << " " << max_sum2 << endl;
        int ans = max(max_sum, max_sum2);
        int ans2 = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans2 += v[i];
        }
        // cout << ans << " " << ans2 << endl;
        if (ans2 <= ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}