package Array;

public class MaxsubArraysum {
    public static void main(String[] args) {
        int[] arrr = {1, 25, 1, 56, 69, 4};
        System.out.println(subarray(arrr));
    }

    static int subarray(int[] nums) {
        int max = nums[0];
        int sum = 0;
        for (int i = 1; i < nums.length; i++) {
            sum += nums[i];
            if (sum > max) {
                max = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }
        return max;
    }
}
