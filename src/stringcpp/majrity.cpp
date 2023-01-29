#include <bits/stdc++.h>
using namespace std;

// N people. Each of them agrees or disagrees with a proposal. Here,
// N is an odd number.

// The
// i-th
// (i=1,2,…,N) person's opinion is represented by a string
// S
// i
// ​
//  : the person agrees if
// S
// i
// ​
//  = For and disagrees if
// S
// i
// ​
//  = Against.

// Determine whether the majority agrees with the proposal.

// Constraints
// N is an odd number between
// 1 and
// 99, inclusive.
// S
// i
// ​
//  = For or
// S
// i
// ​
//  = Against, for all
// i=1,2,…,N.

int main()
{

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }
    int count1 = 0;
    string a = "For", b = "Against";
    for (int i = 0; i < n; i++)
    {
        if (v[i] == a)
        {
            count1++;
        }
    }
    if (count1 > n / 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}