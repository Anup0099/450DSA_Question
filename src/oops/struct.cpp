#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x;
    int y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
};           
int main()
{
    struct Point p(1, 2);

    p.x = 1;
    p.y = 90;
    cout << p.x << " " << p.y << endl;
}