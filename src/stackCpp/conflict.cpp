#include <bits/stdc++.h>
using namespace std;
// You are given two arrays of strings that represent two inclusive events that happened on the same day, event1 and event2, where:

// event1 = [startTime1, endTime1] and
// event2 = [startTime2, endTime2].
// Event times are valid 24 hours format in the form of HH:MM.

// A conflict happens when two events have some non-empty intersection (i.e., some moment is common to both events).

// Return true if there is a conflict between two events. Otherwise, return false.
bool haveConflict(vector<string> &e1, vector<string> &e2)
{
    int t1start = stoi(e1[0].substr(0, 2)) * 60 + stoi(e1[0].substr(3));
    int t1end = stoi(e1[1].substr(0, 2)) * 60 + stoi(e1[1].substr(3));

    int t2start = stoi(e2[0].substr(0, 2)) * 60 + stoi(e2[0].substr(3));
    int t2end = stoi(e2[1].substr(0, 2)) * 60 + stoi(e2[1].substr(3));

    if (t2start <= t1end && t2end >= t1start)
        return true;

    return false;
}
int main()
{
    vector<string> event1 = {"01:15", "02:00"};
    vector<string> event2 = {"02:00", "03:00"};
    cout << haveConflict(event1, event2);
    return 0;
}