#include <bits/stdc++.h>
using namespace std;

int  prints(int ind,int s,int sum,int arr[],int  n)
{
    if(ind ==n){
        if(s==sum){
            return 1;
        }
       else return 0;
    }
    //pick the particular index into the subsequence
    s +=arr[ind];
    int l = prints(ind+1,s,sum,arr,n);
    //not pick the particular index into the subsequence
    s -=arr[ind];
    int r = prints(ind+1,s,sum,arr,n);
    return l+r;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int sum=10;
    cout<<prints(0,0,sum,arr,n);
    return 0;

}