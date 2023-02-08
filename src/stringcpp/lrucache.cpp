#include <bits/stdc++.h>
using namespace std;
class LRUCache
{
public:
    vector<pair<int, int>> cache;
    int n;
    LRUCache(int capacit)
    {
        n = capacity;
    }
    int get(int key)
    {
        for (int i = 0; i < cache.size(); i++)
        {
            if (cache[i].first == key)
            {
                int val = cache[i].second;
                cache.erase(cache.begin() + i);
                cache.push_back({key, val});
                return val;
            }
        }
        return -1;
    }
    void put(int key, int value)
    {
        for (int i = 0; i < cache.size(); i++)
        {
            if (cache[i].first == key)
            {
                cache.erase(cache.begin() + i);
                cache.push_back({key, value});
                return;
            }
        }
        if (cache.size() == n)
        {
            cache.erase(cache.begin());
            cache.push_back({key, value});
        }
        else
        {
            cache.push_back({key, value});
        }
    }
} int main() {}