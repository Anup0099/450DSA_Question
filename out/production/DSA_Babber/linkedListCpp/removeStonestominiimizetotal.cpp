#include <bits/stdc++.h>
using namespace std;
int minimumStones(vector<int> &piles, int k)
{
    priority_queue<int> pq(begin(piles), end(piles));
    while (k > 0)
    {
        int top = pq.top();
        pq.pop();
        int val = floor(top / 2);
        top = top - val;
        pq.push(top);
        k--;
    }
    int sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    return sum;
}
int main()
{
    vector<int> piles = {5, 4, 9};
    int k = 2;
    cout << minimumStones(piles, k);
}