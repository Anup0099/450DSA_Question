#include <bits/stdc++.h> 
using namespace std;
vector<int>pancakeSort(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    for(int i = n-1; i >= 0; i--){
        int maxIdx = 0;
        for(int j = 0; j <= i; j++){
            if(arr[j] > arr[maxIdx]){
                maxIdx = j;
            }
        }
        if(maxIdx == i){
            continue;
        }
        if(maxIdx != 0){
            ans.push_back(maxIdx+1);
            reverse(arr.begin(), arr.begin()+maxIdx+1);
        }
        ans.push_back(i+1);
        reverse(arr.begin(), arr.begin()+i+1);
    }
    return ans;
} 
int main() {} 