#include <bits/stdc++.h> 
using namespace std;
  int getMax(int arr[],int n){
    int res=0;
   for(int j=i-1;j>=0;j--){
         if(arr[j]>arr[i]){
              curr+=arr[j];
         }else{
            breakl
         }
   }
    for(int i=0;i<n;i++){
        int curr=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>curr){
                curr=arr[j];
            }else{
                break;
            }
        }
       
    res=max(res,curr);
    }
    return res;
  }

  int getMax2(vector<int>arr){
    stack<int>s;
    int res=0;
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && arr[s.top()]>=arr[i]){
            int tp=s.top();
            s.pop();
            int curr=arr[tp]*(s.empty()?i:i-s.top()-1);
            res=max(res,curr);
        }
        s.push(i);
    }
    while(!s.empty()){
        int tp=s.top();
        s.pop();
        int curr=arr[tp]*(s.empty()?arr.size():arr.size()-s.top()-1);
        res=max(res,curr);
    }
    return res;


  }

int main() {} 