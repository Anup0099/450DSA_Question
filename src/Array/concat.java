package Array;

import java.util.Arrays;

public class concat {
    public static void main(String[] args) {
        int[] nums = {1, 2, 1};
        System.out.println(Arrays.toString(arrrr(nums)));
    }

    static int[] arrrr(int[] nums) {
        int arr[] = new int[nums.length];
        for (int i = 0; i <  nums.length; ++i) {
            arr[i] = nums[i];
            arr[i + nums.length] = nums[i];
        }
        return arr;

    }
}
