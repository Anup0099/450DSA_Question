package string;

import java.util.Arrays;

public class checkPermutation {
    public static void main(String[] args) {
        String s1 = "ab";
        String s2 ="eidbaooo";
        System.out.println(ispermu(s1,s2));
    }
   static String sort(String s){
        char []c =s.toCharArray();
        Arrays.sort(c);
        return new String(c);
   }

    static boolean ispermu(String s1,String s2){

//        if (s1.length()!=s2.length()) return false;
//        return sort(s1).equals(sort(s2));

//if (s1.length()!=s2.length()) return false;
//int []letters = new int[128];
//char []s_array = s1.toCharArray();
//        for (char c : s_array
//             ) {
//            letters[c]++;
//
//        }
//        for (int i = 0; i < letters.length ; i++) {
//            int c =(int)s2.charAt(i);
//            letters[c]--;
//            if (letters[c]<0){
//                return false;
//            }
//        }
//        return true;

        if (s1.length()>s2.length() || s2.length()==0)return false;
        if (s1.length()==0)return true;
        int x = s1.length(),y= s2.length();
        int []arr = new int[26];
        int []arr2 = new int[26];
        for (int i= 0; i <x;i++){
            arr[s1.charAt(i)-'a']++;
            arr2[s2.charAt(i)-'a']++;

        }
        for (int i = x; i <y ; i++) {
            if(Arrays.equals(arr,arr2)){
                return true;
            }
            arr2[s2.charAt(i-x)-'a']--;
            arr2[s2.charAt(i)-'a']++;
        }
        if (Arrays.equals(arr,arr2))return true;
        else{
            return false;
        }



    }
}
