#include <bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &vec, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : vec)
        {
            cout << it;
        }
        if (vec.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
    }
    printF(ind + 1, vec, arr, n);
    vec.push_back(arr[ind]);
    printF(ind + 1, vec, arr, n);
    vec.pop_back();
}

int main()
{
   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> vec;
    printF(0, vec, arr, n);
    return 0;        
}