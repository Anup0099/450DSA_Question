#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > 2 * nums[j])
            {
                count++;
            }
        }
    }
    return count;
}

// vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         vector<vector<int>>ans;
//         vector<int>ans1;
//         vector<int>ans2;
//         for (int i = 0; i < nums1.size();i++){
//             if(nums1[i] != nums2[i]){
//                 ans1.push_back(nums1[i]);
//             }
//         }
//         for (int i = 0; i < nums2.size();i++){
//             if(nums2[i] != nums1[i]){
//                 ans2.push_back(nums2[i]);
//             }
//         }
//         ans.push_back(ans2);
//         ans.push_back(ans1);
//         return ans;
//     }

//      vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> set1,set2;
//         vector<vector<int>>ans(2);
//         set1.insert(nums1.begin(),nums1.end());
//         set2.insert(nums2.begin(),nums2.end());
//         for(int i: set1){
//             if(set2.count(i)==0){
//                 ans[0].push_back(i);
//             }
//         }
//         for(int i: set2){
//             if(set1.count(i)==0){
//                 ans[1].push_back(i);
//             }
//         }
//         return ans;

//     }
//      int minDeletion(vector<int>& nums) {

//     }
int main()
{
    vector<int> arr{1, 3, 2, 3, 1};
    cout << "The Total Reverse Pairs are " << reversePairs(arr);
}