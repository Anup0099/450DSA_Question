#include <bits/stdc++.h> 
using namespace std; 

vector<int>removeDuplicates(vector<int>&arr){
    int i = 0;
    for(int j = 1; j < arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return arr;
}
int main() {} 