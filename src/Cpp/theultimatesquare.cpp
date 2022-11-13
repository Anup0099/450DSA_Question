#include <bits/stdc++.h>
using namespace std;
// You have n rectangular wooden blocks, which are numbered from 1 to n. The i-th block is 1 unit high and ⌈i2⌉ units long.

// Here, ⌈x2⌉ denotes the result of division of x by 2, rounded up. For example, ⌈42⌉=2 and ⌈52⌉=⌈2.5⌉=3.

// For example, if n=5, then the blocks have the following sizes: 1×1, 1×1, 1×2, 1×2, 1×3.

// The available blocks for n=5
// Find the maximum possible side length of a square you can create using these blocks, without rotating any of them. Note that you don't have to use all of the blocks.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        long long ans = 0;
        int i = 1;
        while (i * i <= sum)
        {
            ans = i;
            i++;
        }
        cout << ans << endl;
    }
}