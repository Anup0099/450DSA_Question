#include <bits/stdc++.h>
using namespace std;
 


bool find(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int lsum = 0, rsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum += arr[j];
            cout<<lsum<<" ";
        }
        cout<< endl;
        for (int j = i + 1; j < n; j++)
        {
            rsum += arr[j];
            cout<<"rsum"<<rsum<<" "; 
        }
        cout<<endl;
        if (lsum == rsum)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = find(arr, n);
    if (ans)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}