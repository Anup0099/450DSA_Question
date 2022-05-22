#include <bits/stdc++.h>
using namespace std;



int divisorSubstrings(int num, int k) {
    string  n= to_string(num);
    int ans =0,s= n.length();
        for (int i = 0; i+k <= s; i++)
        {
            int curr = stoi(n.substr(i,k));
            if(curr>0 && num%curr==0){
                ans++;
            }
        }
        return ans;
        
    }
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minPrice=INT_MAX;
        for(int i=0; i<prices.size(); i++){
            minPrice=min(minPrice, prices[i]);
            maxprofit = max(maxprofit,prices[i]-minPrice);
        }
        return maxprofit;
    }

    int waysToSplitArray(vector<int>& nums) {
        long long rightsum = accumulate(nums.begin(), nums.end(),0LL),leftsum = 0,ans=0;
        for(int i=0;i+1<nums.size();i++){
            rightsum -=nums[i];
            leftsum +=nums[i];
            ans += leftsum>=rightsum;
        }
        return ans;
    }
int main(){

}