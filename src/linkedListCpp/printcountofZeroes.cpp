#include <bits/stdc++.h>
using namespace std;
int countZeroes(int n)
{
    if (n == 0)
        return 0;
    if (n % 10 == 0)
    {
        cout << n << " ";
        return 1 + countZeroes(n / 10);
    }
    else
    {
        cout<<n<<" ";
        return countZeroes(n / 10);
    }
}
int main()
{
    cout << countZeroes(1000);
}