//     Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
import java.util.*;

public class allanagramsinastring {
    public List<Integer> findAnagrams(String s, String p) {
        // brute force solution

        // List<Integer> result = new ArrayList<>();
        // int[] pArray = new int[26];
        // int[] sArray = new int[26];
        // for (int i = 0; i < p.length(); i++) {
        // pArray[p.charAt(i) - 'a']++;
        // }
        // //printArray(pArray);
        // for(int nums:pArray){
        // System.out.print(nums);
        // }
        // for (int i = 0; i < s.length(); i++) {
        // sArray[s.charAt(i) - 'a']++;
        // if (i >= p.length()) {
        // sArray[s.charAt(i - p.length()) - 'a']--;
        // }
        // if (Arrays.equals(pArray, sArray)) {
        // result.add(i - p.length() + 1);
        // }
        // }
        // return result;
        List<Integr> result = new ArrayList<>();
        HasMap<Character, Interger> map = new HashMap<>();
        HashMap<Character, Integer> curr_window = new HasMap<>();
        for (int i = 0; i < p.length(); i++) {
            map.put(num, map.getOrDefault(num, 0) + 1);
            curr_window.put(num, curr_window.getOrDefault(num, 0) + 1);
        }
        if(map.equals(curr_window)){
            result.add(0);
        }
        for(int i=p.length();i<s.length();i++){
            curr_window.put(s.charAt(i), curr_window.getOrDefault(s.charAt(i), 0) + 1);
            curr_window.put(s.charAt(i-p.length()), curr_window.getOrDefault(s.charAt(i-p.length()), 0) - 1);
            if(curr_window.get(s.charAt(i-p.length()))==0){
                curr_window.remove(s.charAt(i-p.length()));
            }
            if(map.equals(curr_window)){
                result.add(i-p.length()+1);
            }
        }
        return result;
      

    }

    public static void main(String[] args) {
        allanagramsinastring a = new allanagramsinastring();
        String s = "cbaebabacd";
        String p = "abc";
        System.out.println(a.findAnagrams(s, p));
    }
}
