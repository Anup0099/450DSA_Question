package Recursion;

import java.util.ArrayList;
import java.util.Scanner;

public class Subsequence {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();
        ArrayList<String>result = gss(str);
        System.out.println(result);

    }
    static ArrayList<String >gss(String str){
        if (str.length()==0){
            ArrayList<String> bresult = new ArrayList<String>();
            bresult.add("");
            return bresult;

        }
        Character ch = str.charAt(0);
        String ros = str.substring(1);
        ArrayList<String>rres = gss(ros);

        ArrayList<String>mres = new ArrayList<String>();
        for (String rstr: rres){
            mres.add("" +rstr);
        }
        for (String rstr: rres){
            mres.add(ch +rstr);
        }
        return mres;
    }

}
