package Dynamicprogramming;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class fibb {
    public  static int fib(int n){
        if (n<2){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
    public  static int fib2(int n,int []arr){
       if (n<2){
           return 1;
       }
       if (arr[n]>0){
           return arr[n];
       }
       int output= fib2(n-1,arr) +fib2(n-2,arr);
       arr[n] =output;
       return output;
    }

//2d array
public static int LargButMinFreq(int arr[], int n) {
    // Your code here
    HashMap<Integer,Integer>map = new HashMap<>();
    for (int i = 0; i <arr.length ; i++) {
        map.put(arr[i],map.getOrDefault(arr[i],0)+1 );
    }
    int max = Integer.MIN_VALUE;
    int min = Integer.MAX_VALUE;
    for (int key: map.keySet()
         ) {
        if (key >max && map.get(key)<=min){
            max = key;
            min = map.get(key);
        }

    }
    return max;
}
public static int  countWords(String list[], int n)
{
    HashMap<String,Integer>map =new HashMap<String, Integer>();
    for (int i = 0; i < list.length; i++) {
        map.put(list[i],map.getOrDefault(list[i],0)+1 );
    }
    int count =0;
    for (String key: map.keySet()
         ) {

        if (map.get(key)==2){
            count++;
        }
    }
    return count;
}
    public static int sumExists(int arr[], int n, int sum)
    {
        // your code here
        int count =0;
        int start =0;
        int end = arr.length-1;
        while (start<=end){
            int sums = arr[start]+arr[end];
            if (sums==sum){
                count++;
            }
        }
        return count;

    }
    public static void main(String[] args) {
//        Scanner scn = new Scanner(System.in);
//        int n = scn.nextInt();
//        int m = scn.nextInt();
//        int arr[][] = new int[n][m];
//        for (int i = 0; i < arr.length ; i++) {
//            for (int j = 0; j < arr[0].length; j++) {
//                arr[i][j]= scn.nextInt();
//            }
//        }
//        int r2 = scn.nextInt();
//        int c2 = scn.nextInt();
//        int [][]two = new int[r2][c2];
//        for (int i = 0; i < two.length ; i++) {
//            for (int j = 0; j <two[0].length ; j++) {
//                two[i][j] = scn.nextInt();
//            }
//        }
//        if (m!=r2){
//            System.out.println("invalid input");
//            return;
//        }
//        int [][]prd = new int[n][c2];
//        for (int i = 0; i < prd.length ; i++) {
//            for (int j = 0; j < prd[0].length; j++) {
//                for (int k = 0; k <n ; k++) {
//                    prd[i][j]+= arr[i][j]*two[k][j];
//                }
//            }
//        }
//
//        for (int i = 0; i < prd.length ; i++) {
//            for (int j = 0; j <prd[0].length ; j++) {
//                System.out.println(prd[i][j]+" ");
//            }
//            System.out.println();
//        }

//        System.out.println(Arrays.toString(arr));

        int arr[] = {1, 2, 3, 4 ,5 ,6, 7, 8, 9, 10};
        System.out.println(sumExists(arr,10,14));

    }
}
