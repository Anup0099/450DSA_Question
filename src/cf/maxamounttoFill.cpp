#include <bits/stdc++.h>
using namespace std;

int fillCups(vector<int> &amount)
{
    int c = 0;
    priority_queue<int> pq;
    for (int i = 0; i < amount.size(); i++)
    {
        pq.push(amount[i]);
    }
    while (pq.top() != 0)
    {
        int a1 = pq.top();
        pq.pop();
        int a2 = pq.top();
        pq.pop();
        int a3 = pq.top();
        pq.pop();
        if (a2 != 0)
        {
            c += 1;
            a1 -= 1;
            a2 -= 1;
            pq.push(a1);
            pq.push(a2);
            pq.push(a3);
        }
        else
        {
            c += a1;
            a1 = 0;
            pq.push(a1);
            pq.push(a2);
            pq.push(a3);
        }
    }
    return c;
}
int main()
{
}