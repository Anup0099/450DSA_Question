#include <bits/stdc++.h>
using namespace std;
void printPattern(int temp, int x)
{
    int count = 1;
    while (temp--)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << count << " ";
        }
        if (count == 1)
        {
            count++;
        }

        count += x;
    }
}

int main()
{
    long long testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << -1 << endl;
        }
        else if (x > 0 && y > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            // means either x of y is 0
            if (x == 0)
            {
                swap(x, y);
            }
            // means y=0
            if ((n - 1) % x == 0)
            {
                int temp = (n - 1) / x;
                printPattern(temp, x);
            }
            else
            {
                cout << -1;
            }
            cout << endl;
        }
    }
    return 0;
}