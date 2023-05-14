#include <bits/stdc++.h>
using namespace std;
// You are given a positive integer arrivalTime denoting the arrival time of a train in hours, and another positive integer delayedTime denoting the amount of delay in hours.

// Return the time when the train will arrive at the station.

// Note that the time in this problem is in 24-hours format.
int findDelayedArrivalTime(int arrivalTime, int delayedTime)
{
    int sum = arrivalTime + delayedTime;
    if (sum >= 24)
    {
        return sum - 24;
    }
    else
    {
        return sum;
    }
}
int findDivisible(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        {
            sum += i;
        }
    }
    return  sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}