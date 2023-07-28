class Solution {
public:
    int solve(vector<int> &nums, int i, int j)
{
    // two options
    // take i
          if(i>j)return 0;
    if(i==j)return nums[i];
    int take_i = nums[i] + min(solve(nums, i + 2, j), solve(nums, i + 1, j - 1));
    int take_j = nums[j] + min(solve(nums, i + 1, j - 1), solve(nums, i, j - 2));
    return max(take_i, take_j);
}
    bool PredictTheWinner(vector<int>& nums) {
         int n = nums.size();
    int sum = accumulate(begin(nums), end(nums), 0);
    // optimal game stragey
    int p1 = solve(nums, 0, n - 1);
    int p2 = sum - p1;
    return p1 >= p2;
    }
};