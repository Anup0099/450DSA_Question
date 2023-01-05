#include <bits/stdc++.h>
using namespace std;
// There are n block towers, numbered from 1 to n. The i-th tower consists of ai blocks.

// In one move, you can move one block from tower i to tower j, but only if ai>aj. That move increases aj by 1 and decreases ai by 1. You can perform as many moves as you would like (possibly, zero).

// What's the largest amount of blocks you can have on the tower 1 after the moves?

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a + 1, a + n);
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {

      if (a[i] > a[0])
      {
        if ((a[i] + a[0]) % 2 == 0)
        {

          a[0] = (a[i] + a[0]) / 2;
        }
        else
        {

          a[0] = (a[i] + a[0]) / 2 + 1;
        }
      }
    }
    cout << a[0] << endl;
  }
}