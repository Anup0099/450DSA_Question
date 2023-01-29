#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long power(long long x, long long y)
{
    if (y == 0)
        return 1;
    long long ans = power(x, y / 2);
    ans *= ans;
    ans %= 1000000007;
    if (y % 2 == 1)
        ans *= x;
    ans %= mod;
    return ans;
}
int countGoodNumbers(long long n)
{
    long long odd = n / 2;
    long long even = n / 2 + n % 2;
    long long ans = (power(5, even) * power(4, odd)) % mod;

    return ans;
}
int main()
{
    long long n;
    cin >> n;
    cout << countGoodNumbers(n);
}