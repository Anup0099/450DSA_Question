#include <bits/stdc++.h>
using namespace std;
void nextGreater(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j] << "";
                break;
            }
        }
        if (j == n)
        {
            cout << -1 << " ";
        }
    }
}

vector<int> nexGreater(int arr[], int n)
{
    vector<int>as;
    stack<int> s;
    s.push(arr[0]);
    for (int i = n - 2; i >= 0; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int nextGre = (s.empty()) ? -1 : s.top();
        as.push_back(nextGre);
        s.push(arr[i]);
    }
    return as;
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
    nextGreater(arr, n);
    vector<int> as = nexGreater(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << as[i] << " ";
    }
    cout << endl;
    return 0;
}