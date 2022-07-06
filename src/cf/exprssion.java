package cf;

import java.util.Scanner;

public class exprssion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        System.out.println(Math.max(Math.max(Math.max(a+b+c,a*(b+c)),(a+b)*c),a*b*c));
    }
}
