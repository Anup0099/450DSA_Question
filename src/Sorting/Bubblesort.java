package Sorting;

import java.util.Arrays;

public class Bubblesort {
    public static void main(String[] args) {
            int []arr = {12,55,698,889};

        buuble(arr, arr.length);
        System.out.println(Arrays.toString(arr));

                }
    static void bubble(int[]arr){
        boolean swapped;

        for (int i = 0; i < arr.length ; i++) {
            swapped = false;
            for (int j = i+1; j <arr.length-1 ; j++) {
                //swap if item is smalle the i-1
                if (arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j]= arr[j-1];
                    arr[j-1]= temp;
                }
            }
            if (!swapped){//!swapped==true
                break;
            }
        }
    }

    static  void buuble(int []arr,int n){
        if (n==0)return;
        for (int i = 0; i <n-1 ; i++) {
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        buuble(arr,n-1);
    }
}
