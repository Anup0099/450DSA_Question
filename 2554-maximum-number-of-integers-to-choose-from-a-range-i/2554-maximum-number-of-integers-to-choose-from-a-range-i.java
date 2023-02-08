class Solution {
    public int maxCount(int[] banned, int n, int maxSum) {
        HashSet<Integer> set = new HashSet<>();
        for (int i : banned) {
            set.add(i);
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (!set.contains(i) && maxSum >= i) {
                count++;
                maxSum -= i;
            }
        }
        return count;
    }
}