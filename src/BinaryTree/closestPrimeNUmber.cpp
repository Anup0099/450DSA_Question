#include <bits/stdc++.h>
using namespace std;
// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
vector<bool> prime(1000005, true);
void sieve(int n)
{
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
}
vector<int> closestPrimes(int left, int right)
{
    prime.resize(right + 1, true);
    sieve(right);
    prime[0] = 0;
    prime[1] = 0;
    int prev = -1;
    int ans1 = INT_MAX;
    vector<int> rans(2,-1);
    for (int i = left; i <= right; i++)
    {
        if (prime[i] == true)
        {
            if (prev != -1)
            {
                if (i - prev < ans1)
                {
                    ans1 = i - prev;
                    rans[0] = prev;
                    rans[1] = i;
                }
            }
            prev = i;
        }
    }
    return rans;
    
}
int main()
{
    int left, right;
    cin >> left >> right;
    vector<int> ans = closestPrimes(left, right);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}