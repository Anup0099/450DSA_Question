#include <bits/stdc++.h>
using namespace std;
 

void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset)
{

    if (ind == N)
    {
        sumSubset.push_back(sum);
        cout<<sum<<endl;
        return;
    }

    func(ind + 1, sum + arr[ind], arr, N, sumSubset);
    func(ind + 1, sum, arr, N, sumSubset);
}
vector<int> subsetSum(vector<int> &arr, int N, int sum)
{
    vector<int> sumSubset;
    func(0, 0, arr, N, sumSubset);
    sort(sumSubset.begin(), sumSubset.end());
    return sumSubset;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int N = arr.size();
    int sum = 10;
    vector<int> sumSubset = subsetSum(arr, N, sum);
    for (auto x : sumSubset)
        cout << x << " ";
    cout << endl;
}