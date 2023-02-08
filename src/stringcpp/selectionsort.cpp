#include <bits/stdc++.h> 
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]= temp;
        arr[i]= temp;


    }
} 
int mod= 1000009+7;
int monkeymove(int n){
    int ans = pow(2,n);
    doubel
    ans -=2;
    if(ans<0){
        ans+=mod;

    }
    return ans;
}
int main() {} 