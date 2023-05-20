#include <bits/stdc++.h>
using namespace std;
int xorr(int a, int b)
{
    return a ^ b;
}
bool doesValidArrayExist(vector<int> &derived)
{
    int sum = 0;
    for (int i = 0; i < derived.size(); i++)
    {
        sum += derived[i];
    }
    if (sum % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}