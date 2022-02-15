#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec1;
        for (size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            vec1.push_back(a);
        }

        int flag = 0;
        for (size_t i = 1; i < n; i++)
        {
            sort(vec1.begin(), vec1.begin() + i);
            sort(vec1.begin() + i + 1, vec1.end());
            for (size_t j = 0; j < n; j++)
            {

                if (vec1[j] > vec1[j + 1])
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}