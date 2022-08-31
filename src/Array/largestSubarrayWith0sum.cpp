#include <bits/stdc++.h>
using namespace std;
int maxlen(vector<int> &a, int n)
{
    int maxlen = 0;
    for(int i = 0; i < n; i++){
        int curr_sum=0;
        for(int j = i; j < n; j++){
            curr_sum+=a[j];
            if(curr_sum == 0){
                maxlen = max(maxlen, j-i+1);
            }
        }
    }
    return maxlen;
}

int maxlen2(vector<int>&a,int n){
    int prefix[n];
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    int ans=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        if(m.count(prefix[i])){
            ans=max(ans,i-m[prefix[i]]);  
        }
        else{
            m[prefix[i]]=i;
        }
    }
    return ans;
}


int main() {}