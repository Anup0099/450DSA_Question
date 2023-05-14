#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        int n, t;
        cin >> n >> t;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        vector<int> B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int currentTime = 0, index = -1, Epoints = 0;
        for (int i = 0; i < n; i++)
        {
            int totalTime = currentTime + A[i];
            if (totalTime <= t)
            {
                if (Epoints < B[i])
                {
                    Epoints = B[i];
                    index = i + 1;
                }
            }
            currentTime++;
        }
        cout << index << endl;
    }
}