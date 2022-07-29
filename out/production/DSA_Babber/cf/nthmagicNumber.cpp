#include <bits/stdc++.h>
using namespace std;

int nthMagicalNumber(int n, int a, int b)
{

    long A = a, B = b;
    long mod = (long)(pow(10, 9) + 7);
    long left = min(a, b), right = (long)n * min(a, b);

    // finding gcd of a and b
    while (B > 0)
    {
        long temp = A;
        A = B;
        B = temp % B;
    }
    long lcm = (a * b) / A;
    while (left < right)
    {
        /* code */
        long m = left + (right - left) / 2;
        if ((m / a) + (m / b) - (m / lcm) < n)
        {
            left = m + 1;
        }
        else
        {
            right = m;
        }
    }

    return (int)(left % mod);
}

int main()
{
    int n = 5;
    int a = 2;
    int b = 3;
    int ans = nthMagicalNumber(n, a, b);
    cout << ans << endl;
    return 0;
}