#include <bits/stdc++.h>
using namespace std;

// You are given a non-degenerate triangle (a non-degenerate triangle is a triangle with positive area). The vertices of the triangle have coordinates (x1,y1), (x2,y2) and (x3,y3).

// You want to draw a straight line to cut the triangle into two non-degenerate triangles. Furthermore, the line you draw should be either horizontal or vertical.

// Can you draw the line to meet all the constraints?

// Here are some suitable ways to draw the line:

// However, these ways to draw the line are not suitable (the first line cuts the triangle into a triangle and a quadrangle; the second line doesn't cut the triangle at all; the third line is neither horizontal nor vertical):

// Input
// The first line contains one integer t (1≤t≤104) — the number of test cases.

// Each test case consists of four lines. The first of them is empty. The i-th of the next three lines contains two integers xi and yi (1≤xi,yi≤108) — the coordinates of the i-th vertex of the triangle.

// Additional constraint on the input: in each test case, the triangle formed by three vertices has positive area (i. e. it is non-degenerate).

// Output
// For each test case, print YES if it is possible to cut the triangle according to the statement, or NO otherwise. You may print each letter in any case (YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        int ans= 0;
        if (x1 == x2 || x1 == x3 || x2 == x3)
        {
            ans++;
        }
        if (y1 == y2 || y1 == y3 || y2 == y3)
        {
            ans++;
        }
        if (ans == 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
