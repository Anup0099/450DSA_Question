package Hashing;

import java.util.*;

public class MaximumNumberOfPairs {


    public static int[] numberOfPairs(int[] nums) {
        Arrays.sort(nums);
    
        
        int pair=0;
        for (int i=0; i<nums.length-1; i++) {
            if(nums[i]==nums[i+1]) {
                pair++;
                nums[i]=-1;
                nums[i+1]=-1;
                i++;
            }
        }
        int not =0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i]!=-1) {
                not++;
            }
        }
        return new int[] {pair, not};
    }
    public static void main(String[] args) {
        
    }
}
