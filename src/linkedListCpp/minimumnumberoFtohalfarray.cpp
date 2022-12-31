#include <bits/stdc++.h>
using namespace std;
int minimumOperation(vector<int> &nums)
{
    int count = 0;
    priority_queue<double> pq(begin(nums), end(nums));
    double sum = accumulate(begin(nums), end(nums), 0);
    int ans = 0;
    while(sum-ans>sum/2){
        double top = pq.top();
        pq.pop();

        ans += top / 2;
        pq.push(top / 2);

        count++;
    }
    return count;
}
int main()
{
    vector<int> nums = {5, 19, 8, 1};

    cout << minimumOperation(nums);
}