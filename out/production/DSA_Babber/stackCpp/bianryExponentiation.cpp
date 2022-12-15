#include <bits/stdc++.h>
using namespace std;
int binaryEansponentiation(int x, int n)
{
    if (n == 0)
        return 1;
    int ans = binaryEansponentiation(x, n / 2);
    if (n % 2 == 0)
        return ans * ans;
    else
        return ans * ans * x;
}
int main()
{
    int x = 2, n = 8;
    cout << binaryEansponentiation(x, n) << endl;
}