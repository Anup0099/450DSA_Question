#include <bits/stdc++.h> 
using namespace std;
long long findSubarray(vector<long long>&arr,int n){
    //brute force
    int count=0
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==0){
                count++;
            }
        }
    }
    return count;
} 
int main() {} 