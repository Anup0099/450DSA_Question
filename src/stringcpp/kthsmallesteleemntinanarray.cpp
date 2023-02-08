#include <bits/stdc++.h>
using namespace std;
void klargest(vector<int> &v, int N, int k)
{
    int n = v.size();
    priority_queue<int> pq(v.begin(), v.begin() + n);
    while (pq.size() > k)
    {
        cout << pq.top() << endl;
        pq.pop();

    }
}
 
int main()
{
    vector<int> nums = {1, 23, 12, 9, 30, 2, 50};
    int k = 3;
    int N = nums.size();
    klargest(nums, N, k);
    // priority_queue<int, vector<int>, greater<>> pq;
    // pq.push(10);
    // pq.push(15);
    // pq.push(4);
    // pq.push(45);
    // cout << pq.size() << endl;
    // cout << pq.top() << endl;
    // while (pq.empty() == false)
    // {
    //     // jab ta not emptynahi hot tb tak print karega ye heap k elements ko
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    // priority_queue<int>pq(nums,nums+n)
    // priority_queue<int,vector<int>,greater<>>pq1;
    return 0;
}