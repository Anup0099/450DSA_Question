package string;

import java.util.Scanner;

public class WordCodeforces {
    public static void main(String[] args) {
        int upper=0,lower=0;
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        for (int i = 0; i <s.length() ; i++) {
            if (s.charAt(i)>='A' && s.charAt(i)<='Z'){
                upper++;
            }else if (s.charAt(i)>='a' && s.charAt(i)<='z'){
                lower++;
            }
        }
        if (upper>lower){
            System.out.println(s.toUpperCase());
        }else if(upper<lower){
            System.out.println(s.toLowerCase());
        }
        else if(lower==upper) {
            System.out.println(s.toLowerCase());
        }
    }
}
