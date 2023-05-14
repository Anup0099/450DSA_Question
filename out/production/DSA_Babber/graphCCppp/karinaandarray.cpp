#include <bits/stdc++.h>
using namespace std;
// Karina has an array of n
//  integers a1,a2,a3,…,an
// . She loves multiplying numbers, so she decided that the beauty of a pair of numbers is their product. And the beauty of an array is the maximum beauty of a pair of adjacent elements in the array.

// For example, for n=4
// , a=[3,5,7,4]
// , the beauty of the array is max
// (3⋅5
// , 5⋅7
// , 7⋅4
// ) = max
// (15
// , 35
// , 28
// ) = 35
// .

// Karina wants her array to be as beautiful as possible. In order to achieve her goal, she can remove some elements (possibly zero) from the array. After Karina removes all elements she wants to, the array must contain at least two elements.

// Unfortunately, Karina doesn't have enough time to do all her tasks, so she asks you to calculate the maximum beauty of the array that she can get by removing any number of elements (possibly zero).
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // long long max=INT_MIN;
        // sort(arr.begin(),arr.end());
        // for(int i=0;i<n-1;i++){
        //     if(arr[i]*arr[i+1]>max){
        //         max=arr[i]*arr[i+1];
        //     }
        // }
        // cout<<max<<endl;
        vector<long long> arr1(n + 1);
        vector<long long> arr2(n + 1);
        if (n == 2)
        {
            cout << arr[0] * arr[1] << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                if (arr[i] < 0)
                {
                    arr1[i] = arr[i];
                }
                else
                {
                    arr2[i] = arr[i];
                }
            }
            // print the array
            //  for(int i=0;i<n;i++){
            //      cout<<arr1[i]<<" ";
            // }
            // cout<<endl;
            // for(int i=0;i<n;i++){
            //      cout<<arr2[i]<<" ";
            // }
            // cout<<endl;
            sort(arr1.begin(), arr1.end());
            sort(arr2.begin(), arr2.end(),greater<int>());
            long long sum1 = INT_MIN, sum2 = INT_MIN;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr1[i] * arr1[i + 1] > sum1)
                {
                    sum1 = arr1[i] * arr1[i + 1];
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (arr2[i] * arr2[i + 1] > sum2)
                {
                    sum2 = arr2[i] * arr2[i + 1];
                }
            }
            if (sum1 > sum2)
            {
                cout << sum1 << endl;
            }
            else
            {
                cout << sum2 << endl;
            }
        }
    }
}