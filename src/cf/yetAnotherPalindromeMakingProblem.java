package cf;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
//input:
public class yetAnotherPalindromeMakingProblem {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        while (n-->0)
        {
           int t=scn.nextInt();
           String a,e = "",o = "";
           a=scn.next();
            for (int i = 0; i < n; i=i+2) {
                e+=a.charAt(i);
            }//even
            for (int i = 1; i <n ; i+=2) {
                o+=a.charAt(i);
            }//odd
            Arrays.sort(e.toCharArray());
            Arrays.sort(o.toCharArray());
            if (e.equals(o))
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");

            }

        }
    }
}
