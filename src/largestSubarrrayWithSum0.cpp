#include <bits/stdc++.h> 
using namespace std;
int maxlen(int arr[],int n){
    //using loop
    int max_len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==0){
                max_len=max(max_len,j-i+1);
            }
        }
    }
} 
int maxlen2(int arr[],int n){
unordered_map<int,int> m;
int sum=0;
int max_len=0;

}
int main() {} 