#include <bits/stdc++.h>
using namespace std;

bool isSameAfterReversals(int num)
{
    return num == 0 || num % 10 > 0;
}
int main()
{
    int num;
    cin >> num;
    cout << isSameAfterReversals(num);
}