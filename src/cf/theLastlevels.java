package cf;

import java.util.Scanner;

public class theLastlevels {
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        int n=scn.nextInt();
        int ans=0;
        while (n-->0) {
            int x=scn.nextInt(),y=scn.nextInt(),z=scn.nextInt();
            if(x>3 && x%3==0){
                int d=(x/3)-1;
                ans=(x*y)+(d*z);
                System.out.println(ans);
            }else if (x>3 && x%3!=0) {
                int d = (x / 3);
                ans = (x * y) + (d * z);
                System.out.println(ans);
            }
            else{
                System.out.println(x*y);
            }

        }
    }
}
