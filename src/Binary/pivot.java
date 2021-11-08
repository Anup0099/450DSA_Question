package Binary;

import java.util.*;
import java.io.*;

public class pivot {

    public static int pivot_index(int[]arr) {
        //write your code here
        int sum =0;
        for (int i = 0; i < arr.length; i++) {
            sum+= arr[i];
        }
        int left =0;
        int right = sum ;
        for (int i = 0; i < arr.length ; i++) {
            right = right-arr[i];
            if (left==right){
                return i;

            }
            left += arr[i];
        }
        return -1;
    }

    public static void main(String[]args) {
        //input work
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int[]arr = new int[n];

        for(int i=0; i < arr.length;i++) {
            arr[i] = scn.nextInt();
        }

        int pi = pivot_index(arr);
        System.out.println(pi);
    }
}