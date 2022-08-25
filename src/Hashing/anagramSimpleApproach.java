package Hashing;

import java.util.HashMap;

//hashmap approach
public class anagramSimpleApproach {
    public static boolean isAnagram(String s,
                             String t) {
    int [] charCount=new int[26];
        for (char c:s.toCharArray()
             ) {
            charCount[c-'a']++;

        }
        int [] charCount2=new int[26];
        for (char c:t.toCharArray()
             ) {
            charCount2[c-'a']++;

        }
        for (int i = 0; i <26 ; i++) {
            if (charCount[i]!=charCount2[i]){
                return false;
            }
        }
        return true;


    }

    public static void main(String[] args) {
        System.out.println(isAnagram("anagram", "nagaram"));
        System.out.println(isAnagram("rat", "car"));
    }
}
