#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    static int i = 2;

    // corner cases
    if (n == 0 || n == 1)
    {
        return false;
    }

    // Checking Prime
    if (n == i)
        return true;

    // base cases
    if (n % i == 0)
    {
        return false;
    }
    i++;
    return isPrime(n);
}
int countPrimes(int n)
{
    // if (n <= 2)
    // {
    //     return 0;
    // }
    // vector<bool> ans;
    // for (int i = 2; i < sqrt(n); i++)
    // {
    //     if (ans[i] == false)
    //     {
    //         for (int j = i * i; j < n; j += i)
    //         {
    //             ans[j] = true;
    //         }
    //     }
    // }
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (ans[i] == false)
    //     {
    //         count++;
    //     }
    // }
    // return count;
    vector<int>ans;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            ans.push_back(i);
        }
    }
    return ans.size();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 10;
    countPrimes(n);
    cout << endl;
}