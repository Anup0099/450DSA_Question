#include <bits/stdc++.h>
using namespace std;
// Design a data structure that keeps track of the values in it and answers some queries regarding their frequencies.

// Implement the FrequencyTracker class.

// FrequencyTracker(): Initializes the FrequencyTracker object with an empty array initially.
// void add(int number): Adds number to the data structure.
// void deleteOne(int number): Deletes one occurence of number from the data structure. The data structure may not contain number, and in this case nothing is deleted.
// bool hasFrequency(int frequency): Returns true if there is a number in the data structure that occurs frequency number of times, otherwise, it returns false.
class FrequencyTracker
{
public:
    vector<int> v;
    FrequencyTracker()
    {
    }

    void add(int number)
    {
        v.push_back(number);
    }

    void deleteOne(int number)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == number)
            {
                v.erase(v.begin() + i);
                break;
            }
        }
    }

    bool hasFrequency(int frequency)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
        }
        for (auto it : m)
        {
            if (it.second == frequency)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}