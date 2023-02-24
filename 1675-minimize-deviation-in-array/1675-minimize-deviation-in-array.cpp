class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
         int n = nums.size();
        int maxe = INT_MIN, mine = INT_MAX;
        priority_queue<int>pq;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                nums[i] = nums[i]*2;
            }
            maxe = max(maxe, nums[i]);
            mine = min(mine, nums[i]);
            pq.push(nums[i]);
        }

        int ans = maxe - mine;

        while (pq.top()%2 == 0) {
            int top = pq.top(); pq.pop();

            ans = min(ans, top - mine);
            top /= 2;
            mine = min(mine, top);
            pq.push(top);
        }
        ans = min(ans, pq.top() - mine);
        return ans;
    }
};