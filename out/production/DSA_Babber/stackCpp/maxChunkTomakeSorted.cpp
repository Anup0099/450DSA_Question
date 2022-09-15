#include <bits/stdc++.h>
using namespace std;
int maxChunksToSorted(vector<int> &arr)
{
    int asum = 0, sum = 0;
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        asum += i;
        sum += arr[i];
        if (asum == sum)
        {
            ans++;
            asum = 0;
            sum = 0;
        }
    }
    return ans;
}

int chunk(vector<int>arr){
    int mx=0;
    int ans=0;

    for(int i=0;i<arr.size();i++){
        mx=max(mx,arr[i]);
        if(mx==i){
            ans++;
        }
    }
    return ans;
}


int main() {}