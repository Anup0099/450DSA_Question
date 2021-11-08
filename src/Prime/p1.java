package Prime;

import java.util.ArrayList;
import java.util.Collections;

public class p1 {
    public static void main(String[] args) {
        System.out.println(sqrt(4));

        System.out.println(intRoman(58));

    }

    static boolean palindrome(int x) {

        if (x == 0) return true;
        if (x < 0 || x % 10 == 0) return false;

        int reverse = 0;
        while (x > reverse) {
            int pop = x % 10;

            x /= 10;
            reverse = (reverse * 10) + pop;
        }
        if (x == reverse || x == reverse / 10) {
            return true;
        }
            else{
                return  false;

        }

    }

    static  double sqrt(double n){
        double x =n ;
        double root ;
        while(true){
            root = 0.5 * (x + (n/x));
            if (Math.abs(root -x)<1){
                break;
            }
            x= root;
        }
        return  root;
    }

    static void factor(int n){
        for (int i = 1; i <=n ; i++) {
            if (n%i==0){
                System.out.print(i+" ");
            }
        }
        return ;
    }
    static void factor2(int n){
        ArrayList<Integer>list = new ArrayList<>();
        for (int i = 1; i <=Math.sqrt(n) ; i++) {
            if (n%i==0){
                if (n/i==i){
                    System.out.print(i+"");
                }else{
                    System.out.print(i+" "+n/i  +" ");
                }
            }
        }
        return ;
    }
    static String intRoman(int num){
        int []intcoe ={1000,900,500,400,100,90,40,50,10,9,5,4,1};
        String []code = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV",
                "I"};
        StringBuilder sb =new StringBuilder();
        for (int i = 0; i <intcoe.length ; i++) {
            while(num>=intcoe[i]){
                sb.append(code[i]);
                num -= intcoe[i];
            }
        }
        return sb.toString();
    }
}
