#include <bits/stdc++.h> 
using namespace std;
// vector<int>topKFrequent(vector<int> &nums,int k){
//     unordered_map<int,int>m;
//     for(int i=0;i<nums.size();i++){
//         m[nums[i]]++;
//     }
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     for(auto it:m){
//         pq.push({it.second,it.first});
//         if(pq.size()>k){
//             pq.pop();
//         }
//     }
//     vector<int>ans;
//     while(pq.size()>0){
//         ans.push_back(pq.top().second);
//         pq.pop();
//     }
//     return ans;
// } 

vector<int>topKFrequents(vector<int> &nums,int k){
    map<int,int>m;
    for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
}
int main() {} 