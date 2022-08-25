#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v = a;
        sort(v.begin(), v.end());
        sort(a.begin(), a.end() + k);
        set<int> s1;
        for (int i = 0; i < k; i++)
        {
            s1.insert(v[i]);
        }
        for (int i = 0; i < k; i++)
        {
            if (s1.find(a[i]) != s1.end())
            {
                s1.erase(a[i]);
            }
        }
        cout << s1.size() << endl;
    }
}