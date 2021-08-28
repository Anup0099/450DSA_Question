package Sorting;

import java.util.Arrays;

public class majorityElemnet {
    public static void main(String[] args) {
        int arr[] = {1, 5, 2, 1, 3, 2, 1};
        System.out.println(frequency(arr));

    }
    static  int frequency(int[]nums){
        Arrays.sort(nums);
        int max_co= 1,res=nums[0];
        int current=1;
        for (int i = 1; i <nums.length;  i++) {
            if (nums[i]==nums[i-1]){
                current++;
            }else {
                if(current>max_co){
                    max_co=current;
                    res=nums[i-1];

                }
                current=1;
            }
        }
        if (current>max_co){
            max_co=current;
            res=nums[nums.length-1];

        }
        return res;

    }
}
