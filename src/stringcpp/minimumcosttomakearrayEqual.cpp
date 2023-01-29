#include <bits/stdc++.h>
using namespace std;
int minOperations(int n)
{
    // int ops = 0;
    // for (int i = 0; i < n / 2; i++)
    // {
    //     int x = 2 * i + 1;
    //     ops += (n - x);
    // }
    // return ops;
    int mid = n / 2;
    if (n % 2 == 0)
    {
        return mid * mid;
    }
    else
    {
        return mid * (mid + 1);
    }
    return -1;
}
int main() {}