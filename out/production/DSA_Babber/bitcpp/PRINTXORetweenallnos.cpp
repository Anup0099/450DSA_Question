#include <bits/stdc++.h>
using namespace std;
int findXOR(int n)
{
    int mod = n % 4;

    // If n is a multiple of 4
    if (mod == 0)
        return n;

    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;

    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;

    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;

    return -1;
}
int main()
{
    int n;
    cin >> n;
    cout << findXOR(n) << endl;
    return 0;
}