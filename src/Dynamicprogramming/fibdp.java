package Dynamicprogramming;

import java.util.Scanner;

public class fibdp {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System .in);
        int n = scn.nextInt();
        int []arr = new int[n+1];
        System.out.println(fibmoized(6,arr));
    }
    public static int fibmoized(int n,int[]qb){
        if (n==0 ||n==1){
            return n;
        }
        if (qb[n]!=0){
            return qb[n];
        }
        int fib1 = fibmoized(n-1,qb);
        int fib2 = fibmoized(n-2,qb);
        int fibn = fib1+fib2;
        qb[n]=fibn;
        return fibn;
    }

}
