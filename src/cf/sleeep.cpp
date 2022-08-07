#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        int h, m;
        vector<int> hour;
        vector<int> min;
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m;
            hour.push_back(h);
            min.push_back(m);
        }
        int rem, hdiv;
        int sleepTime = H * 60 + M;
        int time = 0;
        for (int i = 0; i < n; i++)
        {
            time = hour[i] * 60 + min[i];
            int rem = abs(time - sleepTime) % 60;
            int hdiv = abs(time - sleepTime) / 60;
        }
        vector<int> total;
        int minute = 0;
        for (int i = 0; i < n; i++)
        {
            minute = hour[i] * 60 + min[i] * 60;
            total.push_back(minute);
        }
        int min_value = *min_element(total.begin(), total.end());
        int ans = abs(sleepTime - min_value) / 60;

        for (int i = 0; i < n; i++)
        {
            if (hour[i] == H && min[i] == M)
            {
                cout << "0 0" << endl;
                break;
            }
            else if (hour[i] != H && min[i] != M)
            {
                for (int i = 0; i < n; i++)
                {
                    time = hour[i] * 60 + min[i];
                    rem = abs(time - sleepTime) % 60;
                    hdiv = abs(time - sleepTime) / 60;
                }
                cout << hdiv << " " << rem << endl;
            }
            else
            {

                cout << ans << endl;
            }
        }
    }
}