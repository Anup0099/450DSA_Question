package backrtrackinggg;

import java.util.Scanner;

public class nQueen {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();

//        while (t-->0){
//            double N =scn.nextInt();
//            double fun = (0.143*N);
//            double poww= Math.pow(fun,N);
//            double ans = Math.round(poww);
//            System.out.println((int)ans);
//
//        }
        while(t-->0){
            int n= scn.nextInt(),k= scn.nextInt();
            String str;
            for (int i = 0; i <n ; i++) {
                str = scn.next();
            }
            if (k==0){
                System.out.println("NO");
            }else{
                for (int i = 0; i <k ; i++) {

                }
            }
        }
    }
}
