#include <bits/stdc++.h>
using namespace std;
// Tema loves cinnabon rolls — buns with cinnabon and chocolate in the shape of a "snail".

// Cinnabon rolls come in different sizes and are square when viewed from above. The most delicious part of a roll is the chocolate, which is poured in a thin layer over the cinnabon roll in the form of a spiral and around the bun, as in the following picture:

// Cinnabon rolls of sizes 4, 5, 6

// For a cinnabon roll of size n
// , the length of the outer side of the square is n
// , and the length of the shortest vertical chocolate segment in the central part is one.

// Formally, the bun consists of two dough spirals separated by chocolate. A cinnabon roll of size n+1
//  is obtained from a cinnabon roll of size n
//  by wrapping each of the dough spirals around the cinnabon roll for another layer.

// It is important that a cinnabon roll of size n
//  is defined in a unique way.

// Tema is interested in how much chocolate is in his cinnabon roll of size n
// . Since Tema has long stopped buying small cinnabon rolls, it is guaranteed that n≥4
// .

// Answer this non-obvious question by calculating the total length of the chocolate layer.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;
        ans = (n + 1) * n + n + 2;
        cout << ans << endl;
    }
}