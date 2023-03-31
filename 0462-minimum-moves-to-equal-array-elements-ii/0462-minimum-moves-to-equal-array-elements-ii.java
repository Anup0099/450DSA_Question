class Solution {
    public int minMoves2(int[] nums) {
int n = nums.length;
Arrays.sort(nums);
    int start = 0;
    int end = n - 1;
    int count = 0;
    while (start < end) {
      count += (nums[end] - nums[start]);
      start++;
      end--;
    }
    return count;
    }
}