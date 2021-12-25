package Array;

import java.util.Arrays;
import java.util.Scanner;

public class MINIMUMextraction {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-->0){
            int n = scn.nextInt();
            Integer arr[]= new Integer[n];
            for (int i = 0; i <n ; i++) {
                arr[i]= scn.nextInt();
            }
            Arrays.parallelSort(arr);
            int max = arr[0];
            for (int i = 1; i <n ; i++) {
                max = Math.max(max,arr[i]-arr[i-1]);
            }
            System.out.println(max);
        }
    }
}
