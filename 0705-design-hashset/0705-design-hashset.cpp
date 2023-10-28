class MyHashSet {
public:
    int m;
     vector<list<int>> v;
    int getIndex(int key)
    {
        return key % m;
    }
    MyHashSet()
    {
        m = 10000;
        v = vector<list<int>>(m);
    }

    void add(int key)
    {
        int index = getIndex(key);
        v[index].push_back(key);
    }

    void remove(int key)
    {
        int index = getIndex(key);
        v[index].remove(key);
    }

    bool contains(int key)
    {
        int index = getIndex(key);
        for (auto i : v[index])
        {
            if (i == key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */