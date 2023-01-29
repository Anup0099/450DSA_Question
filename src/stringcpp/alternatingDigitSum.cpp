#include <bits/stdc++.h>
using namespace std;
// You are given a positive integer n. Each digit of n has a sign according to the following rules:

// The most significant digit is assigned a positive sign.
// Each other digit has an opposite sign to its adjacent digits.
// Return the sum of all digits with their corresponding sign.
int alternateDigitSum(int n)
{

    string s = to_string(n);
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            sum += s[i] - '0';
        }
        else
        {
            sum -= s[i] - '0';
        }
    }
    return sum;
}
int main() {}