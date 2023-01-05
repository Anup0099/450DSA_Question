#include <bits/stdc++.h>
using namespace std;
int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
{
    int n = capacity.size();
    int count = 0;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        vec[i] = capacity[i] - rocks[i];
    }

    sort(begin(vec), end(vec));

    for (int i = 0; i < n; i++)
    {
        if (additionalRocks >= vec[i])
        {
            additionalRocks -= vec[i];
            count++;
        }
        else
            break;
    }

    return count;
}
int main() {}