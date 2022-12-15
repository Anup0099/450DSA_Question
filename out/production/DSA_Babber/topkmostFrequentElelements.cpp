#include <bits/stdc++.h>
using namespace std;
struct comparator
{
    bool operator()(pair<int, string> &a, pair<int, string> &b)
    {
        if (a.first == b.first) // if frequency are equal put lexicographically greater element on top
        {
            return a.second < b.second;
        }
        else // if frequency are not equal put the elements on top which has less frequency
        {
            return a.first > b.first;
        }
    }
};
vector<string> topKFrequent(vector<string> &words, int k)
{
    map<string, int> map;
    for (int i = 0; i < words.size(); i++)
    {
        map[words[i]]++;
    }
    priority_queue<pair<int, string>, vector<pair<int, string>>, comparator> pq;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        pq.push({it->second, it->first});
    }
    vector<string> v;
    while (k--)
    {
        v.push_back(pq.top().second);
        pq.pop();
    }
    return v;
}
int main() {}