class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
            priority_queue<pair<int,pair<int,int>>>pq;  //max heap
    for(int i=0;i<nums1.size();i++)
    {
//    	if(pq.size()==k and nums1[i] > pq.top().first)
//    	{
//    		break;
//		}
    	for(int j=0;j<nums2.size();j++)
    	{
    		if(pq.size() < k)           //we have less pair than k
    		{
    			pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
			}
			else if(pq.size()==k and (nums1[i]+nums2[j]) < pq.top().first)  //if the curr pair has sum less than the higest sum among k pair
			{
				pq.pop();
				pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
			}
			else if(pq.size()==k and (nums1[i]+nums2[j]) > pq.top().first)    //nums[i] + nums[j]  > pq.top().first  j+1 j+2 j+3  ---  nums[i+1] + nms
			{
				break;
			}
		}
	}
	vector<vector<int>>ans;
    while(!pq.empty())
    {
    	ans.push_back({pq.top().second.first,pq.top().second.second});
    	pq.pop();
	}
	reverse(ans.begin(),ans.end());
	return ans;
    }
};