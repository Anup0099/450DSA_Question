package Sorting;

import java.util.Arrays;

public class mergeArray {
    public static void main(String[] args) {
        int[] nums1 = {1}; int m = 1;
        int[] nums2 = {}; int n = 0;
            merge(nums1,m,nums2,n);
    }
    static void merge(int[] nums1, int m, int[] nums2, int n) {
         int c1 = m +n;
         int []c =new int[c1];
        for (int i = 0; i <m ; i++) {
            c[i]= nums1[i];
        }
        for (int i = 0; i <n ; i++) {
            c[i+m]=nums2[i];
        }
        insert(c);
//        for (int i = 0; i <c1 ; i++) {
//            System.out.println(c[i]);
//        }



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
        System.out.println(Arrays.toString(arr));


    }
    static void swap(int[] arr, int j, int i) {
        int temp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    }
}

