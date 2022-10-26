#include <bits/stdc++.h>
using namespace std;
#define ll long long
// You are given n numbers a1,a2,…,an. With a cost of one coin you can perform the following operation:

// Choose one of these numbers and add or subtract 1 from it.

// In particular, we can apply this operation to the same number several times.

// We want to make the product of all these numbers equal to 1, in other words, we want a1⋅a2 … ⋅an=1.

// For example, for n=3 and numbers [1,−3,0] we can make product equal to 1 in 3 coins: add 1 to second element, add 1 to second element again, subtract 1 from third element, so that array becomes [1,−1,−1]. And 1⋅(−1)⋅(−1)=1.

// What is the minimum cost we will have to pay to do that?

// Input
// The first line contains a single integer n (1≤n≤105) — the number of numbers.

// The second line contains n integers a1,a2,…,an (−109≤ai≤109) — the numbers.

// Output
// Output a single number — the minimal number of coins you need to pay to make the product equal to 1.

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0, minus = 0, zero = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != 0)
            sum += abs(abs(arr[i]) - 1);
        if (arr[i] < 0)
        {
            minus++;
        }
        if (arr[i] == 0)
            zero++;
    }
    if (minus % 2 != 0)
    {
        if (zero == 0)
        {
            cout << sum + 2 << endl;
        }
        else
            cout << sum + zero << endl;
    }
    else
        cout << sum + zero << endl;
}