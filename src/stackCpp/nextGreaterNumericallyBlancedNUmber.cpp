#include <bits/stdc++.h>
using namespace std;
// An integer x is numerically balanced if for every digit d in the number x, there are exactly d occurrences of that digit in x.

// Given an integer n, return the smallest numerically balanced number strictly greater than n.
bool isBeautifulNumber(int n)
{
    int count[10] = {0};
    while (n)
    {
        count[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] != i)
        {
            return false;
        }
    }
    return true;
}
int nextBeautifulNumber(int n)
{
    while (true)
    {
        if (isBeautifulNumber(++n)) 
        {
            return n;
        }
    }
    
}
int main() {} 