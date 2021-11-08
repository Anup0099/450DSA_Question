package Dynamicprogramming;

import java.util.Scanner;

public class climbingstairs {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int cp = climbing(n,new int[n+1]);
        System.out.println(cp);
    }

    public static  int climbing(int n,int []qb){
        if (n==0 || n<0)return 0;
        if (qb[n]>0){
            return qb[n];
        }
        int  n1 = climbing(n-1,qb);
        int  n2 = climbing(n-2,qb);
        int  n3 = climbing(n-3,qb);
        int cp = n1+n2+n3;
        qb[n]=cp;
        return  cp;
    }
}
