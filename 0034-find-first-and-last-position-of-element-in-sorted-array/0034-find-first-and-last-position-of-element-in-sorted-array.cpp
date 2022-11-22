class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> ans;
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            int l1 = mid, r1 = mid;
            while (l1 >= 0 && nums[l1] == target)
            {
                l1--;
            }
            while (r1 < nums.size() && nums[r1] == target)
            {
                r1++;
            }
            ans.push_back(l1 + 1);
            ans.push_back(r1 - 1);
            return ans;
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
    }
};