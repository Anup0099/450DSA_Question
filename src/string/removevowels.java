package string;

import java.util.Scanner;

public class removevowels {
    static String removal(String s) {
//        String ans="";
//        for (int i = 0; i <s.length() ; i++) {
//            if (s.charAt(i) == 'a' || s.charAt(i) == 'e'
//                    || s.charAt(i) == 'i' || s.charAt(i) == 'o'
//                    || s.charAt(i) == 'u' || s.charAt(i) == 'A'
//                    || s.charAt(i) == 'E' || s.charAt(i) == 'I'
//                    || s.charAt(i) == 'O'
//                    || s.charAt(i) == 'U'){
//                continue;
//            }else {
//                ans=ans+ s.charAt(i);
//            }
//        }
//        return ans;
        String str2 = " ";

        str2 = s.replaceAll("[aeiouAEIOU]", "");

        return str2;


    }

    public static boolean check(String s,
                                String s1) {
        if (s.contains(s1)) {
            return true;
        }
        return false;
    }

    //check for substring
    //check for subsequence
    public static boolean checkSubsequence(String a,
                                           String b,
                                           int n,
                                           int m) {
         n = a.length();
         m = b.length();
        if (n == 0) return false;
        if (m == 0) return true;

        if (a.charAt(n - 1) == b.charAt(m - 1)) {
            return checkSubsequence(a, b, n - 1, m - 1);
        } else {
            return checkSubsequence(a, b, n - 1, m);
        }


    }


    public static void main(String[] args) {

        String s = " ABCDEF";
        String ss = " ADE";
        System.out.println(check(s, ss));
    }
}
