import java.util.HashMap;
import java.util.Map;
import java.util.*;
import java.util.Arrays;
import java.util.stream.*;

/**
 * permutationinastring
 */
public class permutationinastring {
    public static boolean checkInclusion(String s1, String s2) {
        int[] m = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            m[s1.charAt(i) - 'a']++;
        }

        // for(int i:s2Array){
        // System.out.println(i);
        // }
        int j = 0, i = 0;
        int total_Chars = s1.length();
        while (j < s2.length()) {
            if (m[s2.charAt(j++) - 'a']-- > 0) {
                total_Chars--;
            }
            if (total_Chars == 0)
                return true;
            if (j - i == s1.length() && m[s2.charAt(i++) - 'a']++ >= 0) {
                total_Chars++;
            }

        }
        return false;
    }

    public static int singleNumber(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i : nums) {
            map.put(i, map.getOrDefault(i, 0) + 1);

        }
        // {2,1,1}=> map.get means from nums is take 2 from nums and find it in map of
        // that frequency is 1 or not
        for (int i : nums) {
            if (map.get(i) == 1) {
                return i;
            }
        }
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() == 1) {
                return entry.getKey();
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        // int nums[] = { 2, 2, 1 };
        // System.out.println(singleNumber(nums));
        String s1 = "ab";
        String s2 = "eidbaooo";
        System.out.println(checkInclusion(s1, s2));

    }
}