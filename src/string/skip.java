package string;

import java.util.ArrayList;
import java.util.Scanner;

public class skip {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        ArrayList<Integer> al = new ArrayList<>();
        for(int i = 0 ; i < n; i++){
            al.add(scn.nextInt());
        }
        sol(al);
        System.out.println(al);
    }

    static boolean isPrime(int val) {
        for (int div = 2; div*div <= val;div++){
            if (val%div==0){
                return false;
            }
        }
        return true;
    }

    static void sol(ArrayList<Integer> al) {
        for (int i = al.size() - 1; i >= 0; i--) {
            int val = al.get(i);
            if (isPrime(val) == true) {
                al.remove(i);
            }
        }
    }

    static void skipped(String p,
                        String up) {
        if (up.isEmpty()) {
            System.out.println(p);
            return;
        }
        char s = up.charAt(0);
        if (s == 'a') {
            skipped(p, up.substring(1));
        } else {
            skipped(p + s, up.substring(1));
        }
    }

    static void subs(String p,
                     String up) {
        if (up.isEmpty()) {
            System.out.println(p);
            return;
        }
        char s = up.charAt(0);
        subs(p + s, up.substring(1));
        subs(p, up.substring(1));
    }
}
