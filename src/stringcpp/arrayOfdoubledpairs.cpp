#include <bits/stdc++.h>
using namespace std;
// Given an integer array of even length arr, return true if it is possible to reorder arr such that arr[2 * i + 1] = 2 * arr[2 * i] for every 0 <= i < len(arr) / 2, or false otherwise
bool comp(int &a, int &b)
{
    return abs(a) < abs(b);
}
bool canReorderDoubled(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), comp);
    map<int, int> m;
    for (auto i : arr)
    {
        m[i]++;
    }
    for (auto i : arr)
    {

        if (m[arr[i]] == 0)
        {
            continue;
        }
        else if (m[arr[i] * 2] == 0)
        {
            return false;
        }
        else
        {
            m[arr[i]]--;
            m[arr[i] * 2]--;
        }
    }
    return true;
}
int main() {}