class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
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
};