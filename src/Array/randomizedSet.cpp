#include <bits/stdc++.h>
using namespace std;

// we cant use set beacause insertion is o(1) and deletion is o(n) also random access is not allowed
// we use unordered_map  store index in map vector +map much more simpele value as key ans index as value

class RandomizedSet
{
    vector<int> v;
    unordered_map<int, int> mymap;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (mymap.find(val) != mymap.end())
            return false;
        v.push_back(val);
        mymap[val] = v.size() - 1;
        return true;
    }

    bool remove(int val)
    {
        if (mymap.find(val) == mymap.end())
            return false;

        auto it = mymap.find(val);
        v[it->second] = v.back();
        v.pop_back();
        mymap[v[it->second]] = it->second;
        mymap.erase(val);
        return true;
    }

    int getRandom()
    {
        return v[rand()%v.size()];
    }
};

int main() {}