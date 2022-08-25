#include <bits/stdc++.h>
using namespace std;
int sieve[1000005];
void createSieve()
{
    int N = 1000000;
    for (int i = 2; i <= N; i++)
    {
        sieve[i] = 1;
        ;
    }
    // step 1 says ,mark from2 to 10^6 as true
    for (int i = 2; i * i <= N; i++)
    {
        // perform step 2
        if (sieve[i] == 1)
        {
            // mark all the multiples of i if sieve[i]==1
            for (int j = i * i; j <= N; j = j + i)
            {
                sieve[j] = 0;
            }
        }
    }
}

// time complexity is O(n)+O(sqrt(n))
// this time complexity has not been deduced yet
void primeCheck()
{
    int t;

    cin >> t;
    createSieve();
    while (t--)
    {

        int n;
        cin >> n;
        if (sieve[n] == 1)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
}
int main()
{
    primeCheck();
}