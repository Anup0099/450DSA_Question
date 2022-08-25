#include <bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int> &arr)
{
     int n = arr.size();
        vector<int>ans;
        
        vector<int>copy;                 //copy of arr.
        for(int i=0;i<n;i++){
            copy.push_back(arr[i]);
        }
        
        sort(arr.begin(), arr.end());
        multimap<int, int>mp;            //allows duplicate keys unlike map.
        
        int rank=1;
        for(int i=0;i<n;i++){          
            if(i!=0 && arr[i]==arr[i-1])   
                mp.insert({arr[i], rank}); // if 2 elements are equal we keep the same rank.
            else{
                mp.insert({arr[i], rank});
                rank+=1;                    // else we increament it.
            }
        }
        
        for(int i=0;i<n;i++){
            if(mp.find(copy[i])!=mp.end()){    
                auto x = mp.find(copy[i]);      //finding first element in map. 
            ans.push_back(x->second);              // returning its mapped value.
            }
        }
        return ans;
}
int main() {}