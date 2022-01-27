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