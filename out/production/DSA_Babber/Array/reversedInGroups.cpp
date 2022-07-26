#include <bits/stdc++.h>
using namespace std;


void reversedInGroups(vector<long long>&arr,int n,int k){
    for(int i=0;i<n; i+=k){
        long long l=i,r=min((i+k-1),n-1);
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
}

int main(){
    vector<long long>arr={1,2,3,4,5,6,7,8,9,10};
    reversedInGroups(arr,10,3);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0; 
}