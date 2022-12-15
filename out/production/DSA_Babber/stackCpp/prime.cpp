#include <bits/stdc++.h>
using namespace std;
// Pak Chanek has a prime number† n. Find a prime number m such that n+m is not prime.

// † A prime number is a number with exactly 2 factors. The first few prime numbers are 2,3,5,7,11,13,…. In particular, 1 is not a prime number.

// Input
// Each test contains multiple test cases. The first line contains an integer t (1≤t≤104) — the number of test cases. The following lines contain the description of each test case.

// The only line of each test case contains a prime number n (2≤n≤105).

// Output
// For each test case, output a line containing a prime number m (2≤m≤105) such that n+m is not prime. It can be proven that under the constraints of the problem, such m always exists.

// If there are multiple solutions, you can output any of them.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2 || n == 3)
        {
            cout << 7 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}