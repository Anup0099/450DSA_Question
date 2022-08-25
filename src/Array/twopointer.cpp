#include <bits/stdc++.h>
using namespace std;

bool isPiar(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] == x)
        {
            return true;
        }
        else if (arr[left] + arr[right] > x)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}
bool isPointer(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
    }
}
int main() {}