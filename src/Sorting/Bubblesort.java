package Sorting;

import java.util.Arrays;

public class Bubblesort {
    public static void main(String[] args) {
            int []arr = {12,55,698,889};
            bubble(arr);
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
}
