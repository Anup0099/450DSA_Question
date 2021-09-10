package Array;

import java.util.ArrayList;
import java.util.Arrays;

public class BuildArrayPermutation {
    public static void main(String[] args) {
        int []num ={0,2,1,5,3,4};
        int []ans = buildArray(num);
        System.out.println(Arrays.toString(ans));
    }
    static int[] buildArray(int[] nums) {
        int n= nums.length;
        int []arr = new int[n];
        for (int i = 0; i < n ; i++) {
            arr[i] = nums[nums[i]];
        }
        return arr;
    }
}

