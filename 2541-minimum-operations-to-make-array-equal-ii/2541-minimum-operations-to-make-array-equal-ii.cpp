class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
       if (k == 0)
    {
        return nums1 == nums2 ? 0 : -1;
    }
    long long countPos = 0, countNeg = 0;
    for (int i = 0; i < nums1.size(); i++)
    {
        long long diff = nums1[i] - nums2[i];
        if (diff % k)
        {
            return -1;
        }
        else if (diff > 0)
        {
            countPos += diff / k;
        }
        else
        {
            countNeg += diff / k;
        }
    }
    if (countPos + countNeg == 0)
    {
        return countPos;
    }
    else
    {
        return -1;
    }
    }
};