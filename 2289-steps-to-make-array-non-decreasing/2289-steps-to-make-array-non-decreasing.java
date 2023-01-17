class Solution {
    public int totalSteps(int[] nums) {
        int n = nums.length;
        int ans = 0;
        Stack<Pair<Integer, Integer>> s = new Stack<>();
        s.push(new Pair(nums[n - 1], 0));
        for (int i = n - 2; i >= 0; i--) {
            int count = 0;
            while (!s.isEmpty() && nums[i] > s.peek().getKey()) {
                count = Math.max(count + 1, s.peek().getValue());
                s.pop();
            }
            ans = Math.max(ans, count);
            s.push(new Pair(nums[i], count));
        }
        return ans;
    }
}