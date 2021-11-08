package string;

import java.util.Scanner;

public class cc1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            int a=sc.nextInt();
            int b=sc.nextInt();
            int z=sc.nextInt();
            if(b<=(a+z*2)){
                System.out.println("yes");
            }else{
                System.out.println("no");
            }
        }
    }
}
