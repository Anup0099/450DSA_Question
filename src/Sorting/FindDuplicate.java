package Sorting;

import java.util.Arrays;

public class FindDuplicate {
    public static void main(String[] args) {
        int []arr ={1,2,3,1};
        System.out.println(containsDuplicate(arr));
    }
    static boolean containsDuplicate(int[] nums) {
            insert(nums);
        for (int i = 1; i < nums.length; i++) {
            if (nums[i]==nums[i-1]){
                return true;
            }

        }
        return false;
    }
    static void insert(int []arr){

        for (int i = 0; i <arr.length-1;  i++) {
            for (int j = i+1; j >0; j--) {
                if (arr[j] <arr[j-1]){
                    swap(arr,j,j-1);
                }else{
                    break;
                }
            }
        }
//        System.out.println(Arrays.toString(arr));


    }
    static void swap(int[] arr, int j, int i) {
        int temp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    }
}
