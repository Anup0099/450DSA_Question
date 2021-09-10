package Recursion;

import java.util.Scanner;

public class firstIndex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int []arr = new int[n];
        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        int d =sc.nextInt();
        int f = first(arr,0,d);
        System.out.println(f);
    }
    static int first(int[]arr,int idx,int x){
        if (idx==arr.length){
            return -1;
        }
        if (arr[idx]==x){
            return idx;
        }else{
            int fiisa = first(arr,idx+1,x);
            return fiisa;
        }
    }
}
