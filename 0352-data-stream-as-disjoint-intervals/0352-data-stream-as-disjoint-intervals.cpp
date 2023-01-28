class SummaryRanges {
public:
   set<int> s;
    SummaryRanges()
    {
        s.clear();
    }
    void addNum(int value)
    {
        s.insert(value);
    }
    vector<vector<int>> getIntervals()
    {
        vector<int> nums(begin(s), end(s));
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int left = nums[i];
            while (i < n - 1 and nums[i] + 1 == nums[i + 1])
            {
                i++;
            }
            result.push_back({left, nums[i]});
        }
        return result;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */