#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int points = (3 * a) / 10;
    int time = a - (a / 250) * c;
    
    int points2 = (3 * b) / 10;
    int time2 = b - (b / 250) * d;

    int ans1 = max(points, time);
    int ans2 = max(points2, time2);

    if (ans1 > ans2)
    {
        cout << "Misha" << endl;
    }
    else if (ans1 < ans2)
    {
        cout << "Vasya" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}