#include <bits/stdc++.h>
using namespace std;
// Given a non-negative integer num, return true if num can be expressed as the sum of any non-negative integer and its reverse, or false otherwise.

// Example 1:

// Input: num = 443
// Output: true
// Explanation: 172 + 271 = 443 so we return true.
int reverse(int num){
    int rev = 0;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
bool sumOfNumberAndReverse(int num)
{
   for (int i = 0; i <= num; i++)
   {
       if (i + reverse(i) == num)
       {
           return true;
       }
   }
    return false;
}
int main() {
    int num = 443;
    cout << sumOfNumberAndReverse(num);
    return 0;
}