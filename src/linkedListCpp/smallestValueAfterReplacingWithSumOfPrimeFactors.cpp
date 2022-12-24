#include <bits/stdc++.h>
using namespace std;
// You are given a positive integer n.

// Continuously replace n with the sum of its prime factors.

// Note that if a prime factor divides n multiple times, it should be included in the sum as many times as it divides n.
// Return the smallest value n will take on.
int primeFactors(int n)
{
    vector<int> factors;
    int sum = 0;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        factors.push_back(n);
    }
    for (int i = 0; i < factors.size(); i++)
    {
        sum += factors[i];
    }
    return sum;
}

int smallestValue(int n)
{
    int sum = primeFactors(n);
    while (sum != n)
    {
        n = sum;
        sum = primeFactors(n);
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << smallestValue(n);
}