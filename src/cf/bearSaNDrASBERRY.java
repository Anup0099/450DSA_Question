package cf;

import java.util.Arrays;
import java.util.Scanner;

public class bearSaNDrASBERRY {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = sc.nextInt();
        int a = 0, d = 0, max = 0;
        for (int i = 0; i < n; i++,d=a) {
            a=sc.nextInt();
            max=Math.max(d-c-a,max);
        }

        System.out.println(max);
    }

}

