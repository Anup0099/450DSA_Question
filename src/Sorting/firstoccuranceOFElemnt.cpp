#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n, int x)
{
    vector<int> v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            v.push_back(i);
            while (arr[i] == x)
            {
                i++;
                count++;
            }
            break;
        }
    }
    if (v.size() == 0)
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    else
    {
        v.push_back(v[0]+count-1);
    }   
    return v;
}

int main()
{
}