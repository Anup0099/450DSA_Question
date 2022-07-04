#include <bits/stdc++.h>
using namespace std;

int subset(int arr[],int n,int sum){
    if(n==0){
       return (sum==0)?1:0;
    }
    return subset(arr,n-1,sum)+subset(arr,n-1,sum-arr[n-1]);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    cout<<subset(arr,n,sum);
    return 0;
}