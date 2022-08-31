#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int n;cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int count=0;
    for(int i=0;i<n;i++){
        int x=arr[i].first;
        int y=arr[i].second;
        int count1=0;
        int count2=0;
        int count3=0;
        int count4=0;
        for(int j=0;j<n;j++){
            if(arr[j].first>x && arr[j].second==y)count1++;
            if(arr[j].first<x && arr[j].second==y)count2++;
            if(arr[j].first==x && arr[j].second>y)count3++;
            if(arr[j].first==x && arr[j].second<y)count4++;
        }
        if(count1>0 && count2>0 && count3>0 && count4>0)count++;
    }
    cout<<count<<endl;
} 