#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2)
{
    string result = "";
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
            sum += num1[i--] - '0';
        if (j >= 0)
            sum += num2[j--] - '0';
        result = to_string(sum % 10) + result;
        carry = sum / 10;
    }
    if (carry)
        result = to_string(carry) + result;
    return result;
}
int main() {
    string num1 = "123";
    string num2 = "456";
    cout << addStrings(num1, num2) << endl;

             
    
    return 0;
}