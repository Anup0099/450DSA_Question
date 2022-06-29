#include <bits/stdc++.h>
using namespace std;
void ree(char arr[], int low, int high)
{
    while (low <= high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void revrse(char arr[], int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            ree(arr, start, i - 1);
            start = i + 1;
        }
    }
    ree(arr, start, n - 1);
    ree(arr, 0, n - 1);
}


int main()
{
    char arr[] = "I am a student";
    int n = strlen(arr);
    revrse(arr, n);
    cout << arr;
    return 0; 
}