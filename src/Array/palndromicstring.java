package Array;

import java.util.Scanner;

public class palndromicstring {
    static int palindromeIndex(String s){
        int palindromeIndex = -1;
        int n = s.length();
        for (int i = 0; i < n/2; i++) {
            if (s.charAt(i) != s.charAt(n-i-1)) {
                if(i+1 < n){
                    boolean plandrome = isValidPalindrome(s.substring((i+1), n));
                    if(plandrome){
                        return i;
                    }
                    return  n-i-1;
                }
            }
        }
        return palindromeIndex;
    }

    private static boolean isValidPalindrome(String substring) {
        int n = substring.length();
        for (int i = 0; i < n/2; i++) {
            if (substring.charAt(i) != substring.charAt(n-i-1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for (int i = 0; i < q; i++) {
            String s = in.next();
            int result = palindromeIndex(s);
            System.out.println(result);

        }
        in.close();
    }
}
