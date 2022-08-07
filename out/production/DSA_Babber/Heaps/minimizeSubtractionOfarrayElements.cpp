#include <bits/stdc++.h> 
using namespace std;
int minimumOperation(int N,int x,vector<int>nums){
    int ans=0;
    priority_queue<int>pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
    }
    while(!pq.empty()){
        if (pq.top()==0)
        {break;
            
        }
        ans++;
        int num=pq.top();
        x -=num;
        num /=2;
        if(num>0){
            pq.push(num);
        }
    }
    if(x>0)return -1;
    return ans;
} 
int main() {
    
 int N = 3;
    vector<int> nums = { 3, 4, 12 };
    int X = 25;
 
    // Function call
    cout << minimumOperation(N, X, nums);
    return 0;
} 