package Array;

import java.util.ArrayList;

public class kadanesAlgo {
     public static int subarray(int[] nums,
                               ArrayList<Integer> arr) {
        int sum = 0;
        int s=0;
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            if (sum > max) {
                max = sum;
                arr.add(s);
                arr.add(i);
            }
            if (sum < 0) {
                sum = 0;
                s = i+1;

            }
        }
        return max;
    }

    public static void main(String[] args) {
        int[] nums = {-2,1,-3,4,-1,2,1,-5,4};
        ArrayList<Integer>arr = new ArrayList<>();
        System.out.println(subarray(nums,arr));
        for (int i = arr.get(0); i <=arr.get(1); i++) {
            System.out.println(nums[i]+"");
        }
    }
}
