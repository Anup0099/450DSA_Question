package string;

import java.util.Arrays;

public class isAnagram {
    public static Boolean isAnagram(String a,
                                    String b) {
      char s[]=a.toCharArray();
        Arrays.sort(s);
        char s2[]= b.toCharArray();
        Arrays.sort(s2);
        for (int i = 0; i <s.length ; i++) {
            System.out.print(s[i]);
        }
        System.out.println();
        for (int i = 0; i <s2.length ; i++) {
            System.out.print(s2[i]);
        }
        for (int i = 0; i <s.length ; i++) {
            for (int j = 0; j <s2.length ; j++) {
                if (s[i]==s2[j]){
                    return true;

                }else{
                  return  false;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        String s="tac",b="cat";
        System.out.println(isAnagram(s,b));
    }
}
