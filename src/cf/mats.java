package cf;

import java.util.Scanner;

public class mats {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while (t-->0){
            int a = scn.nextInt();
            int b = scn.nextInt();
            int ans = Math.min(Math.min(a,b),(a+b)/4);
            System.out.println(ans);
        }
        scn.close();
    }

}
