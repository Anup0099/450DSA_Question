package Recursion;

import java.util.Scanner;

public class luckyDivision {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0 || n % 4747 == 0 || n % 4774 == 0 || n % 47447 == 0 || n % 47474 == 0    || n%477==0) {

        System.out.println("YES");}
        else
        System.out.println("NO");
    }
}
