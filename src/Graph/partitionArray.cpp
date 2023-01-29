#include <bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q1)
{
    queue<int> q2 = q1;
    while (!q2.empty())
    {
        cout << q2.front() << "\n";
        q2.pop();
    }
}
int partitionArray(vector<int> &A, int k)
{
    sort(A.begin(), A.end());
    int res = 1, mx = A[0], mn = A[0];
    for (auto a : A)
    {
        mx = max(mx, a);
        mn = min(mn, a);
        if (mx - mn > k)
        {
            res++;
            mn = mx = a;
        }
    }
    return res;
}

int main()
{

    map<int, int> mp;
    for (int i = 1; i <= 5; i++)
    {
        mp.insert({i, i * 10});
        // mp[i] = i * 10;
    }
    cout << "Elemnts are present in the map:" << endl;
    cout << "key elements" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    int n = 2;
    if (mp.find(2) != mp.end())
    {
        cout << n << "is present in map" << endl;
    }
    mp.erase(mp.begin());
    cout << "elements after deleting the first element" << endl;
    cout << "key element" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    cout << "The size of the map is" << mp.size() << endl;
    if (mp.empty() == false)
    {
        cout << "The map is not empty" << endl;
    }
    else
    {
        cout << "The map is empty" << endl;
    }
    mp.clear();
    cout << "The size of the map after clearing all the elements" << mp.size();

    // queue
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    cout << "the elements of the square" << endl;
    printqueue(q);
    cout << "The size of the queue" << q.size() << endl;
    cout << "The front element of the queue:" << q.front() << endl;
    cout << "The last element of the queue:" << q.back() << endl;
}