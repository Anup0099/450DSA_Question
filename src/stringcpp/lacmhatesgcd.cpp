#include <bits/stdc++.h>
using namespace std;
// Chef has two integers
// �
// A and
// �
// B.
// Chef wants to find the minimum value of
// lcm
// (
// �
// ,
// �
// )
// −
// gcd
// (
// �
// ,
// �
// )
// lcm(A,X)−gcd(B,X) where
// �
// X is any positive integer.

// Help him determine this value.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        long long gcd= __gcd(a, b);
        long long ans= a-gcd;
        cout << ans << endl;
    }
    return 0;
}