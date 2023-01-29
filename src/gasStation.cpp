#include <bits/stdc++.h>
using namespace std;
int completeCircuit(vector<int> &gas, vector<int> &cost)
{
    int current = 0;
    int total_fuel = 0, total_cost = 0;
    int diff = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        total_fuel += gas[i];
        total_cost += cost[i];
        current += gas[i] - cost[i];
        if (current < 0)
        {
            start = i + 1;
            current = 0;
        }
    }
    if (total_fuel < total_cost)
    {
        return -1;
    }
    return start;
}
int main() {}