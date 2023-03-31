class Solution {
    public boolean isPrime (int x) {
        if (x == 1) {
            return false;
        }
        for (int i = 2; i * i <= x; ++i) {
            if (x %i == 0) {
                return false;
            }
        }
        return true;
    }
    public boolean primeSubOperation(int[] nums) {
        int dif = 0;
        for (int i = 0 ; i<nums.length ; i++) {
            if (nums[i] <= dif) return false;
            int range = nums[i] - dif - 1;
            while (range > 0 && !isPrime(range)){
                range--;
            }
            nums[i] = nums[i] - range;
            dif = nums[i];
        }
        return true;
    }
}