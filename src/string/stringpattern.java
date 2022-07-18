package string;

import java.util.Scanner;

public class stringpattern {
    static  void matching(String s,String pat){
        int m=pat.length();
        for (int i = 0; i <s.length()-m+1 ; i++) {
            if (s.substring(i,i+m).equals(pat)) {
                System.out.println(i+" ");
            }
        }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        matching("aaaaa","aa");


    }
}
