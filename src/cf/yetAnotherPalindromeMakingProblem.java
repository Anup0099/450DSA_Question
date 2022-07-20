package cf;

import java.util.Scanner;

public class yetAnotherPalindromeMakingProblem {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        while (n-->0)
        {
            String s=scn.next();
            int len=s.length();
            int count=0;
            for (int i = 0; i <len ; i++) {
                if (s.charAt(i)==s.charAt(len-i-1))
                {
                    count++;
                }
            }
            if (count==len)
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
