#include <bits/stdc++.h>
using namespace std;
// Two T-shirt sizes are given: a and b. The T-shirt size is either a string M or a string consisting of several (possibly zero) characters X and one of the characters S or L.

// For example, strings M, XXL, S, XXXXXXXS could be the size of some T-shirts. And the strings XM, LL, SX are not sizes.

// The letter M stands for medium, S for small, L for large. The letter X refers to the degree of size (from eXtra). For example, XXL is extra-extra-large (bigger than XL, and smaller than XXXL).

// You need to compare two given sizes of T-shirts a and b.

// The T-shirts are compared as follows:

// any small size (no matter how many letters X) is smaller than the medium size and any large size;
// any large size (regardless of the number of letters X) is larger than the medium size and any small size;
// the more letters X before S, the smaller the size;
// the more letters X in front of L, the larger the size.
// For example:

// XXXS < XS
// XXXL > XL
// XL > M
// XXL = XXL
// XXXXXS < M
// XL > XXXS
// Input
// The first line of the input contains a single integer t (1≤t≤104) — the number of test cases.

// Each test case consists of one line, in which a and b T-shirt sizes are written. The lengths of the strings corresponding to the T-shirt sizes do not exceed 50. It is guaranteed that all sizes are correct.

// Output
// For each test case, print on a separate line the result of comparing a and b T-shirt sizes (lines "<", ">" or "=" without quotes).
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int m = a.length(), n = b.length();
        int c1 = count(a.begin(), a.end(), 'X');
        int c2 = count(b.begin(), b.end(), 'X');

        if (a == b)
        {
            cout << "=" << endl;
        }
        else if (a[m - 1] == 'L' && b[n - 1] == 'L')
        {
            if (c1 > c2)
            {
                cout << ">" << endl;
            }
            else if (c1 < c2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else if (a[m - 1] == 'S' && b[n - 1] == 'S')
        {
            if (c1 > c2)
            {
                cout << "<" << endl;
            }
            else if (c1 < c2)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
           
        }
        else if (a[m - 1] == 'L' && b[n - 1] == 'S')
        {
            cout << ">" << endl;
        }
        else if (a[m - 1] == 'S' && b[n - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else if (a[m - 1] == 'M' && b[n - 1] == 'S')
        {
            cout << ">" << endl;
        }
        else if (a[m - 1] == 'S' && b[n - 1] == 'M')
        {
            cout << "<" << endl;
        }
        else if (a[m - 1] == 'M' && b[n - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else if (a[m - 1] == 'L' && b[n - 1] == 'M')
        {
            cout << ">" << endl;
        }
    }
}