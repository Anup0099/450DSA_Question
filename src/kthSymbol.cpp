#include <bits/stdc++.h>
using namespace std;
int kthSymbol(int n, int k)
{
    if (n == 1 && k == 1)
        return 0;
    int mid = pow(2, n - 1) / 2;
    if (k <= mid)
        return kthSymbol(n - 1, k);
    else
        return !kthSymbol(n - 1, k - mid);
}
int main() {}