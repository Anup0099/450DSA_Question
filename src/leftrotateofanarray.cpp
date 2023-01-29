#include <bits/stdc++.h>
using namespace std;
void rotateByone(vector<int> &nums)
{
    int temp = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        nums[i - 1] = nums[i];
        nums[nums.size() - 1] = temp;
    }
}
int main()
{
    int m = 3, n = 2;
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(10);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    set<vector<int>> s;
    vector<int> v{10, 20, 30, 40};
    vector<int> v1{10, 20, 30, 40, 50};
    s.insert(v);
    s.insert(v1);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        for (auto it1 = it->begin(); it1 != it->end(); it1++)
        {
            cout << *it1 << " ";
        }
        cout << endl;
        
       
    }
}