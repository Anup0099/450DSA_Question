package string;

import java.util.ArrayList;

public class output {
    public static void main(String[] args) {
        System.out.println("anup"+new ArrayList<String>());

        String str = "dmfjjggogj";
    }
    static boolean ispOa(String s){
        s= s.toLowerCase();
        for (int i = 0; i <s.length()/2 ; i++) {
            char start = s.charAt(i);
            char end = s.charAt(s.length() -i-1);
            if (start!=end){
                return false;
            }

        }
        return true;
    }
}
