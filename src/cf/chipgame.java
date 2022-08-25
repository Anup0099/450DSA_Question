package cf;

import java.util.Scanner;

public class chipgame {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        while(n-->0){
            long a=sc.nextInt();
            long b=sc.nextInt();
            long ans= a+b;
            if(ans %2==0){
                System.out.println("Tonya");
            }else{
                System.out.println("Burenka");
            }


        }
    }
}
