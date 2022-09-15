#include <bits/stdc++.h>
using namespace std;
int getWater(int arr[], int n)
{
    //naive solution
    int res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        // leftmax height of blocks
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }
        // rightmax height
        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        res = res + (min(lmax, rmax) - arr[i]);
    }
    return res;
}


//optimized version of trapping rain water
 int getWater2(int arr[],int n){
    int res=0;
    int lmax[n],rmax[n];
    for(int i=0;i<n;i++){
        lmax[i]=max(lmax[i-1], arr[i]);
    }
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i-1]);
    }
    for(int i=1;i<n-1;i++){
        res= res+(min(lmax[i],rmax[i])-arr[i]);

    }
    return res;
 }
int main() {
    int n=6;
    int  arr[]={5,0,6,2,3};
   cout<< getWater2(arr,n);
}