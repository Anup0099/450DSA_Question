#include <bits/stdc++.h>
using namespace std;
//  Given three distinct integers a, b, and c, find the medium number between all of them.

// The medium number is the number that is neither the minimum nor the maximum of the given three numbers.

// For example, the median of 5,2,6 is 5, since the minimum is 2 and the maximum is 6.
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        long long a, b, c;
        cin >> a >> b >> c;
        if (a > b && a < c || a > c && a < b)
        {
            cout << a<<endl;
        }
        else if (b > a && b < c || b > c && b < a)
        {
            cout << b<<endl;
        }
        else
        {
            cout << c<< endl;
        }
    }
}