#include <bits/stdc++.h>
using namespace std;
//  A non-empty digit string is diverse if the number of occurrences of each character in it doesn't exceed the number of distinct characters in it.

// For example:

// string "7" is diverse because 7 appears in it 1 time and the number of distinct characters in it is 1;
// string "77" is not diverse because 7 appears in it 2 times and the number of distinct characters in it is 1;
// string "1010" is diverse because both 0 and 1 appear in it 2 times and the number of distinct characters in it is 2;
// string "6668" is not diverse because 6 appears in it 3 times and the number of distinct characters in it is 2.
// You are given a string s of length n, consisting of only digits 0 to 9. Find how many of its n(n+1)2 substrings are diverse.

// A string a is a substring of a string b if a can be obtained from b by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

// Note that if the same diverse string appears in s multiple times, each occurrence should be counted independently. For example, there are two diverse substrings in "77" both equal to "7", so the answer for the string "77" is 2.
int main()
{
    char x = '2';
    x -= '0';
    if (x)
        cout << x << endl;
}