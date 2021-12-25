package codechefs;

import java.util.Scanner;

public class car {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-->0){
            int n = scn.nextInt();
            int v = scn.nextInt();
           if (v>=n-1){
               System.out.print((n*(n-1)/2) +" "+ (n-1) );



           }else{
               System.out.print(n*(n-1)/2) ;
               System.out.print(((n-v)*(n-v+1))/2 + v-1);

           }
        }
    }
}
