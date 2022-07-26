#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    vector<int> a(digits.size() + 1, 0);
    a[0] = 1;
    //if the first digit is 9, then we need to add a new digit to the front of the vector 
    return a;
}
int main()
{
    vector<int> a = {9, 9, 9};
    vector<int> b = plusOne(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}