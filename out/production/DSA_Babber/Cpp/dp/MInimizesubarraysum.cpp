#include <bits/stdc++.h>
#define ll long long
#define fastio
using namespace std;
int minSubarray(int target,vector<int>&nums){
    int sum=0;
    int n =nums.size();
    int right =0;
    int left=0;
    int shortest =INT_MAX;
    while(right<n){
        sum +=nums[right];
        if(sum>=target){
            while (sum>=target)
            {
                /* code */
                sum -=nums[left];
                left++;
            }
            shortest = min(shortest,right-left+2);
            
        }
        right++;
    }
    return shortest==INT_MAX ?0:shortest;
}


const int N = 1e7 + 10;
int hashing[N];

int main()
{
    // int n;cin>>n;
    // int a[n];
    // for (size_t i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin>>a[i];
    //     hashing[a[i]]++;
    // }
    // int q;cin>>q;
    // while (q--)
    // {
    //     /* code */
    //     int x;cin>>x;
    //     cout<<hashing[x]<<endl;

    // }

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
   
    
    
    
}