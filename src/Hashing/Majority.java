package Hashing;

import java.util.Arrays;
import java.util.HashMap;

public class Majority {
    public static void main(String[] args) {
        int []nums = {2,2,1,1,1,2,2};
        System.out.println(major(nums));
    }
    static int major(int[]nums){
        HashMap<Integer, Integer>map=new HashMap<Integer, Integer>();
            int count=0;
        for (int i = 0; i <nums.length ; i++) {
            if (map.containsKey(nums[i])){
                 count = map.get(nums[i]);
                if (count>nums.length/2){
                    System.out.println(nums[i]);
                }else{
                    map.put(nums[i],count);
                }
            }else{
                map.put(nums[i],1);
            }

        }
        return count;

    }
}
