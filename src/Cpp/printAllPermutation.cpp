//  Min Max Swap
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two arrays a and b of n positive integers each. You can apply the following operation to them any number of times:

Select an index i (1≤i≤n) and swap ai with bi (i. e. ai becomes bi and vice versa).
Find the minimum possible value of max(a1,a2,…,an)⋅max(b1,b2,…,bn) you can get after applying such operation any number of times (possibly zero).

Input
The input consists of multiple test cases. The first line contains a single integer t (1≤t≤100) — the number of test cases. Description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤100) — the length of the arrays.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤10000) where ai is the i-th element of the array a.

The third line of each test case contains n integers b1,b2,…,bn (1≤bi≤10000) where bi is the i-th element of the array b.

Output
For each test case, print a single integer, the minimum possible value of max(a1,a2,…,an)⋅max(b1,b2,…,bn) you can get after applying such operation any number of times.

Example


#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        for (int i = 0; i < n; i++)
        {
            /* code */
            if (arr1[i] > arr2[i])
            {
                swap(arr1[i], arr2[i]);
                
            }
           
        }
        //to find max of arr1
        int flag = 0;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            if(arr1[i]>flag)
            {
                flag = arr1[i];
            }
        }
        
       
        

         int flag2 = 0;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            if(arr2[i]>flag2)
            {
                flag2 = arr2[i];
            }
        }
        
       
        int ans = flag2 * flag;
        cout << ans << endl;


    }
}