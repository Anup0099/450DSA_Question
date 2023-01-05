#include <bits/stdc++.h>
using namespace std;

void func(int ind, int sum, vector<int> &arr, int N, vector<int> &sumSubset)
{
    if (ind == N)
    {
        sumSubset.push_back(sum);
        return;
    }
    func(ind + 1, sum + arr[ind], arr, N, sumSubset);
    func(ind + 1, sum, arr, N, sumSubset);
}

vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> sumSubset;
    func(0, 0, arr, N, sumSubset);
    sort(sumSubset.begin(), sumSubset.end());
    return sumSubset;
}

int main()
{
    vector<int> arrr = {1, 2, 3};
    int N = 3;
    subsetSums(arrr, N);
}