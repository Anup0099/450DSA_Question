#include <bits/stdc++.h>
using namespace std;
//  Chef is given a number in form of its binary representation
// �
// S, having length
// �
// N.

// Determine if the number can be represented as a sum of exactly three powers of
// 2
// 2. Please refer to samples for further explanation.

// Note that
// �
// S will NOT contain leading zeros.
// Input Format
// The first line of input will contain a single integer
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer
// �
// N, the length of the binary string.
// The next line contains the string
// �
// S, the binary representation of a number.
// Output Format
// For each test case, output YES if the number can be represented as sum of exactly three powers of
// 2
// 2.

// You can print each character in uppercase or lowercase. For example YES, yes, Yes, and yES are all considered the same.
int binarytodecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ss = stoi(s);
        int dec_value = binarytodecimal(ss);
        cout << dec_value << endl;
        int count = 3;
        
       
      
    }
}