class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
      vector<vector<int>> ans;
        int n=intervals.size();
    
    int i = 0;
    while (i < n)
    {
        if (intervals[i][1] < newIntervals[0])
        {
            ans.push_back(intervals[i]);
        }
        else if (intervals[i][0] > newIntervals[1])
        {
            break;
        }
        else
        {
            // merge them and erase the interval which was merged
            newIntervals[0] = min(intervals[i][0], newIntervals[0]);
            newIntervals[1] = max(intervals[i][1], newIntervals[1]);
            // intervals.erase(intervals.begin() + i);
        }
        i++;
    }
    ans.push_back(newIntervals);
    while (i < n)
    {
        ans.push_back(intervals[i]);
        i++;
    }

    return ans;  
    }
};