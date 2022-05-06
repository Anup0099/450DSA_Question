#include <bits/stdc++.h>
using namespace std;

int sumofOddLength(vector<int> arr)
{
    int ans=0,sum=0;
    vector<int>v;
    //make prefix array
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
        v.push_back(sum);
    }
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j+=2){
            if(i==0){
                ans +=v[j];
            }else{
                ans +=(v[j] -v[i-1]);
            }
        }
    }
        return ans;
};

int main(){

}