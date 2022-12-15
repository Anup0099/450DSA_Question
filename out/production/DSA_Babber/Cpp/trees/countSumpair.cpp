#include <bits/stdc++.h> 
using namespace std;
int count(vector<int>&arr,int sum){
    map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    int count = 0;
    for(int i=0;i<arr.size();i++){
        count +=m[sum-arr[i]];
        // cout<<count<<endl;
        if(sum-arr[i]==arr[i]){
            count--;
        }
    }
    return count/2;
} 
int main() {
    vector<int>arr = {1,5,7,-1,5};
    int sum = 6;
    cout<<count(arr,sum);
} 