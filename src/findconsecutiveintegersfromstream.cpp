#include <bits/stdc++.h>
using namespace std;
//  For a stream of integers, implement a data structure that checks if the last k integers parsed in the stream are equal to value.

// Implement the DataStream class:

// DataStream(int value, int k) Initializes the object with an empty integer stream and the two integers value and k.
// boolean consec(int num) Adds num to the stream of integers. Returns true if the last k integers are equal to value, and false otherwise. If there are less than k integers, the condition does not hold true, so returns false.
class DataStream
{
    int k;
    int value;
public:
    DataStream(int value, int k)
    {
        this->value = value;
        this->k = k;
    }
    bool consec(int num)
    {
        int count = 0;
        if (num == value)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        return count == k;
    }
};

int main()
{
}