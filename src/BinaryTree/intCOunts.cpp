#include <bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int count = 0;
    int rem = 0;
    vector<int> v;
    while (n > 0)
    {
        rem = n % 10;
        v.push_back(rem);
        n = n / 10;
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    for (int i = 0; i < v.size(); i++)
    {
        // check if arr[i] is divisibe by n
        if (v[i] != 0 && n % v[i] == 0)
        {
            count++;
            cout<<count<<endl;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << countDigits(n);
    cout << 121 % 2;
     string str = to_string(num);

    // Initialize a count to keep track of the number of digits that divide num
    int count = 0;

    // Iterate through the digits in the string
    for (char c : str) {
      // Convert the current character to an integer
      int digit = c - '0';

      // Check if the digit divides num
      if (num % digit == 0) {
        // If it does, increment the count
        count++;
      }
    }

    // Return the count
    return count;
}