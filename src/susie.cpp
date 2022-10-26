#include <bits/stdc++.h>
using namespace std;
// implement bubble sort

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    sort(arr, arr + n);
    int noOFdisappointed=0,waitingTime=arr[0];
    for(int i = 0; i < n; i++){
        if(waitingTime>arr[i]){
            noOFdisappointed++;
        }else{
            waitingTime +=arr[i];
        }
    }
    cout<< (n-noOFdisappointed);
    
}