#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        int count1, count2, count3, count4;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int x = arr[i].first;
            int y = arr[i].second;
            count1 = count2 = count3 = count4 = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j].first > x and arr[j].second == y)
                    count1++;
                if (arr[j].first < x and arr[j].second == y)
                    count2++;
                if (arr[j].first == x and arr[j].second > y)
                    count3++;
                if (arr[j].first == x and arr[j].second < y)
                    count4++;
            }
        }
        if (count1 > 0 && count2 > 0 && count3 > 0 && count4 > 0)
            count++;
        return count;
    }
}
