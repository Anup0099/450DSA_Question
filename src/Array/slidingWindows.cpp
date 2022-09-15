#include <bits/stdc++.h> 
using namespace std;
//maximum subarray sum
//bruteforce
//repeative work 
int slidingWindow(vector<int>arr,int window){
    int n=arr.size();
    int i=0,j=0;
    int sum=0;
    int ans=0;
   
    for(i=0;i<n;i++){
        for(j=0;j<i+window;j++){
            sum+=arr[j];
            ans = max(ans,sum);
        }
    }
    return ans;
}
int main() {

} 