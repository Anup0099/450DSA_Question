#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, m;
        cin >> n >> H >> m;
        vector<pair<int, int>> v(n);
        pair<int, int> p = {H, m};
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        auto lb = lower_bound(v.begin(), v.end(), p) - v.begin();
        auto ub = upper_bound(v.begin(), v.end(), p) - v.begin();
        if (lb != ub)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            if (ub == n)
            {
                int hh = 23 - H, mm = 60 - m;
                int fmm = v[0].second + mm;
                int carry = fmm / 60;
                fmm %= 60;
                int fhh = v[0].first + hh + carry;
                cout << fhh << " " << fmm << endl;
            }
            else
            {
                int flag = 0;
                if (v[ub].second < m)
                    v[ub].second = v[ub].second + 60, v[ub].first--;
                cout << v[ub].first-H << " " << v[ub].second-m << endl;
            }
        }
    }
}