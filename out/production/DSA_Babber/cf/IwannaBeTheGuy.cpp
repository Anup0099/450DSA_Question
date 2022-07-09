#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[250];
    // int p, q, n;
    // cin >> n >> p >> q;
    // for (int i = 0; i < p; i++)
    // {
    //     cin >> arr[i];
    // }
    // int ans = 0;
    // for (int i = p; i < p + q; i++)
    // {
    //     cin >> arr[i];
    // }
    // sort(arr, arr + (p + q));

    // for (int i = 0; i < p + q; i++)
    // {
    //     if (arr[i] != arr[i + 1])
    //     {
    //         ans++;
    //     }
    // }
    // if (n == ans)
    // {
    //     cout << "I become the guy" << endl;
    // }
    // else
    // {
    //     cout << "oh, my keyboard" << endl;
    // }
    // return 0;
     int array[250];
    int n , p , q;
    cin >> n >> p;
    int count = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> array[i];
    }
    for (int i = 0; i < p; i++)
    {
        cout<< array[i]<<" ";
    }
    cout<<endl;
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> array[i];
    }
    for (int i = 0; i < p+q; i++)
    {
        cout<< array[i]<<" ";
    }
    cout<<endl;
    
    sort(array , array+(p+q));
    for (int i = 0; i < p+q; i++)
    {
        cout<< array[i]<<" ";
    }
    for(int i = 0 ; i < p+q ; i++){
        if(array[i] != array[i+1]){
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}