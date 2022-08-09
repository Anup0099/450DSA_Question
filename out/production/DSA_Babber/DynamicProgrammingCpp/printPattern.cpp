#include <bits/stdc++.h>
using namespace std;
vector<int> pattern(int N)
{
    vector<int> v;
    for (int i = N - 1; i > 0; i = i - 5)
    {
        v.push_back(i + 1);
    }
    for (int i = 0; i <= N - 1; i += 5)
    {
        v.push_back(i + 1);
    }
    return v;
}
void helper(vector<int> &res, int n, int present, bool inc)
{
    res.push_back(present);
    if (inc)
    {

        if (present == n)
        {
            return;
        }
        else
        {
            helper(res, n, present + 5, true);
        }
    }
    else
    {
        if (present - 5 > 0)
        {
            helper(res, n, present - 5, false);
        }
        else
        {
            helper(res, n, present - 5, true);
        }
    }
}

vector<int> pattern(int n)
{
    vector<int> res;
    helper(res, n, 1 , true);
    return res;
}
int main()
{
    vector<int> v = pattern(16);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}