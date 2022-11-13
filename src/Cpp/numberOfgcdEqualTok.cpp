#include <bits/stdc++.h> 
using namespace std;
int subarrayEqualToGcd(vector<int>arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int gcd=arr[i];
        for(int j=i;j<n;j++){
            gcd=__gcd(gcd,arr[j]);
            if(gcd==k){
                count++;
            }
        }
    }
    return count;
} 
int main() {} 