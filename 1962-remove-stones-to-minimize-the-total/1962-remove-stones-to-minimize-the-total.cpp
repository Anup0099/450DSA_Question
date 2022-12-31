class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
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
};