  vector<vector<int>>ans;
        vector<int>ans1;
        vector<int>ans2;
        for (int i = 0; i < nums1.size();i++){
            if(nums1[i] != nums2[i]){
                ans1.push_back(nums1[i]);
            }
        }
        for (int i = 0; i < nums2.size();i++){
            if(nums2[i] != nums1[i]){
                ans2.push_back(nums2[i]);
            }
        }
        ans.push_back(ans2);
        ans.push_back(ans1);
        return ans;