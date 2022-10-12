class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int>v(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v.begin());
        sort(v.begin(),v.end());
        double mid= v.size()>>1;
        if(v.size()%2==0){
            return (v[mid]+v[mid-1])/2.0;
        }
        return v[mid];
    }
};