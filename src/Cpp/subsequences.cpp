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
        return;
    }
    printF(ind + 1, vec, arr, n);
    vec.push_back(arr[ind]);
    printF(ind + 1, vec, arr, n);
     vec.pop_back();
}
// first step convert into index problem whenever you see there is an arrray checj if i==n s==sum then push into ds and print it
int main()
{

    int arr[] = {3, 1, 2};
    int n = 3;

    vector<int> vec;
    printF(0, vec, arr, n);
    return 0;
}