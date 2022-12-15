#include <bits/stdc++.h>
using namespace std;
// Given an array of n positive integers a1,a2,…,an (1≤ai≤1000). Find the maximum value of i+j such that ai and aj are coprime,† or −1 if no such i, j exist.

// For example consider the array [1,3,5,2,4,7,7]. The maximum value of i+j that can be obtained is 5+7, since a5=4 and a7=7 are coprime.

// † Two integers p and q are coprime if the only positive integer that is a divisor of both of them is 1 (that is, their greatest common divisor is 1).

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int max = 0;
        // using one loop
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) == 1)
                {
                    if (i + j > max)
                    {
                        max = i + j;
                    }
                }
            }
        }

        if (max == 0)
        {
            printf("%d\n",-1);
        }
        else if (max == -1)
        {
            printf("%d\n",-1);
        }

        else
        {
            printf("%d\n",max + 2);
        }
    }
}