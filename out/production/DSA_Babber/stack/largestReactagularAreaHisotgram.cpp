#include <bits/stdc++.h>
using namespace std;
int getMaxArea(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for (int j = i - 1; j > 0; j--)
        {
            if (curr >= arr[j])
            {
                curr += arr[j];
            }
            else
            {
                break;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[i])
            {
                curr += arr[j];
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int x = 10;
    int *p = &x;
    int **q=&p;
    cout<<**q<<endl;//*q will print  address of p    which is 10
    
}
