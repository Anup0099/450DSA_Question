#include <bits/stdc++.h>
using namespace std;

void f(int ind, vector<int> &ds,int arr[],int n)
{
    if (ind >= n)
    {
        for (auto it : ds)
        {
            cout<<it<< " ";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    f(ind+1,ds,arr,n);

    //not take the particular index into the subsequence
    ds.pop_back();
    f(ind+1,ds,arr,n);

    
}

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    f(0,ds,arr,n);
    return 0;
}