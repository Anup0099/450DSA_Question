#include <bits/stdc++.h>
using namespace std;

void subarrmax(vector<int> v, int &k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && v[i] >= v[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for (int i = k; i <= v.size(); i++)
    {
        cout << v[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && v[i] >= v[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << v[dq.front()] << endl;
}

int main()
{
    vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    subarrmax(v, k);
}