#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;

void printNegetive(int arr[], int n, int k)
{
    deque<int> d;
    int i;
    for ( i = 0; i < k; i++)
    {
        /* code */
        if (arr[i] < 0)
        {
            d.push_back(i);
        }
    }

    for (; i < n; i++)
    {
        /* code */
        if (!d.empty())
        {
            cout << arr[d.front()] << " ";
        }
        else
        {
            cout << "0"
                 << " ";
        }

        while ((!d.empty()) && d.front() < (i - k + 1))
        {
            /* code */
            d.pop_front();///remove from end 
        }
        if (arr[i] < 0)
        {
            d.push_back(i);///push in front
        }
    }
    if (!d.empty())
    {
        cout << arr[d.front()] << " ";
    }
    else
    {
        cout << "0"
             << " ";
    }
}
void printFirstNegativeInteger(int arr[], int n, int k)
{
    // A Double Ended Queue, Di that will store indexes of
    // useful array elements for the current window of size k.
    // The useful elements are all negative integers.
    deque<int>  Di;
  
    /* Process first k (or first window) elements of array */
    int i;
    for (i = 0; i < k; i++)
        // Add current element at the rear of Di
        // if it is a negative integer
        if (arr[i] < 0)
            Di.push_back(i);
     
    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for ( ; i < n; i++)
    {
        // if Di is not empty then the element at the
        // front of the queue is the first negative integer
        // of the previous window
        if (!Di.empty())
            cout << arr[Di.front()] << " ";
         
        // else the window does not have a
        // negative integer
        else
            cout << "0" << " ";
  
        // Remove the elements which are out of this window
        while ( (!Di.empty()) && Di.front() < (i - k + 1))
            Di.pop_front();  // Remove from front of queue
  
        // Add current element at the rear of Di
        // if it is a negative integer
        if (arr[i] < 0)
            Di.push_back(i);
    }
  
    // Print the first negative
    // integer of last window
    if (!Di.empty())
           cout << arr[Di.front()] << " ";
    else
        cout << "0" << " ";      
     
}
  
int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printNegetive(arr, n, k);
}