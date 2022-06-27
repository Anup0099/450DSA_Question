package string;

import java.util.Arrays;

public class checforanagrams {
    public static boolean anagram(String s1,
                                  String s2) {
        if (s2.length() != s1.length()) return false;
        char[] chars = s1.toCharArray();
        char[] chars1 = s2.toCharArray();
        Arrays.sort(chars);
        Arrays.sort(chars1);
        s1 = new String(chars);
        s2 = new String(chars1);
        return s1.equals(s2);
    }

    public static void main(String[] args) {

    }
}
