#include <bits/stdc++.h>
using namespace std;
int freq[1000005];
int sieve[1000005];
void createSieve()
{
    int t;
    cin >> t;
    int N = 1000000;

    for (int i = 2; i <= N; i++)
    {
        sieve[i] = 1;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i] == 1)
        {
            freq[i]++;

            for (int j = i * i; j <= N; j = j + i)
            {
                if (sieve[j] == 1)
                {
                    sieve[j] = 0;
                    freq[i]++;
                }
            }
        }
        while (t--)
        {
            int n;
            cin >> n;
            cout << freq[n] << endl;
        }
    }
}
int main() {}