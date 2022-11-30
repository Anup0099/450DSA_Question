#include <bits/stdc++.h>
using namespace std;
// Given a positive integer n, find the pivot integer x such that:

// The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
// Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.
int pivotInteger(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    int left = 0;
    int right = sum;

    for (int i = 1; i <= n; i++)
    {
        left += i - 1;
        right -= i;
        if (left == right)
        {
            return i;
        }
    }
    return -1;
}
int main() {}