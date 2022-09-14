#include <bits/stdc++.h>
using namespace std;
vector<int> findkdistant(vector<int> &nums, int key, int k)
{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (abs(i - j) <= k && nums[j] == key)
            {
                v.push_back(i);
                break;
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}
int main() {
    vector<int> nums = {3,4,9,1,3,9,5};
    int key = 9;
    int k = 1;
    vector<int> v = findkdistant(nums, key, k);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}