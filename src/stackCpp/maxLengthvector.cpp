#include <bits/stdc++.h> 
using namespace std;
//-1 1 2 -2
int maxength(vector<int>&arr,int n){
    stack<int>st;
    int maxi=0;
    st.push(0);
    for(int i=1;i<=n;i++){
        if(arr[i]>0)st.push(i);
        else{
            int ind=st.top();
            st.pop();
            if(arr[i]==-arr[i]){
                maxi=max(maxi,i-st.top());
            }else{
                st.push(i);
            }
        }
    }
    return maxi;
} 
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxength(arr,n)<<endl;
    return 0;
} 