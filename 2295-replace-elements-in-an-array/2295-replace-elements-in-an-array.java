class Solution {
    public int[] arrayChange(int[] nums, int[][] operations) {
                  HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], i);

        }
        for (int i = 0; i < operations.length; i++) {
            int oldNUm = operations[i][0];
            int newNUm = operations[i][1];
            if (map.containsKey(oldNUm)) {
                int index = map.get(oldNUm);
                nums[index] = newNUm;
                map.put(newNUm, index);
            }
        }
        return nums;
    }
}