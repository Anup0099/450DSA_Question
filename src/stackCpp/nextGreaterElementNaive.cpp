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

void nexGreater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    for (int i = n - 2; i >= 0; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int nextGre = (s.empty()) ? -1 : s.top();
        cout << nextGre << endl;
        s.push(arr[i]);
    }
}
int main()
{
}