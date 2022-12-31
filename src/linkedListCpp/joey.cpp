#include <bits/stdc++.h>
using namespace std;
// Joey is low on money. His friend Chandler wants to lend Joey some money, but can't give him directly, as Joey is too proud of himself to accept it. So, in order to trick him, Chandler asks Joey to play a game.

// In this game, Chandler gives Joey an array a1,a2,…,an (n≥2) of positive integers (ai≥1).

// Joey can perform the following operation on the array any number of times:

// Take two indices i and j (1≤i<j≤n).
// Choose two integers x and y (x,y≥1) such that x⋅y=ai⋅aj.
// Replace ai by x and aj by y.
// In the end, Joey will get the money equal to the sum of elements of the final array.

// Find the maximum amount of money ans Joey can get but print 2022⋅ans. Why multiplied by 2022? Because we are never gonna see it again!

// It is guaranteed that the product of all the elements of the array a doesn't exceed 1012.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 1;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans *= a[i];
        }
        ans = ans + n - 1;
        cout << ans * 2022 << endl;
    }
}