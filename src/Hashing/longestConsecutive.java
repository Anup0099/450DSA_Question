package Hashing;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

public class longestConsecutive {
    public static void main(String[] args) {

    }
public static String reverse(char[]str){
        int i=0,j=str.length-1;
        char temp;
        while (i<j){
            temp = str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
        return new String(str);

}
public static boolean word(String patteern,String str){
        String []words = str.split(" ");
        HashMap<Character,String>map= new HashMap<>();
        HashMap<String,Boolean>used = new HashMap<>();
    for (int i = 0; i <patteern.length() ; i++) {
        char ch = patteern.charAt(i);
        if (map.containsKey(ch)==false){
            if (used.containsKey(words[i])==true){
                return false;
            }else{
                used.put(words[i],true );
                map.put(ch,words[i]);
            }
        }else{
            String mwith = map.get(ch);
            if (mwith.equals(words[i])==false){
                return false;
            }
        }

    }
    return true;
}
public static String r1(String s){
        StringBuilder sb = new StringBuilder();
    for (String str:s.split(" ")
         ) {
        sb.append(reverse(str.toCharArray())).append(" ");
        return sb.substring(0,sb.length()-1);

    }
    return " ";

}
    public static void move(int[] nums) {
        int n = nums.length;
        int right = 0, left = 0;
        int temp;
        while (right < n) {
            if (nums[right] == 0) {
                ++right;
            } else {
                temp = nums[right];
                nums[left] = nums[right];
                nums[right] = temp;
            }
        }
    }

    public static int solution(String str) {
        boolean f1 = false;
        boolean f2 = false;
        int ans = 0;
        int i = -1;
        int j = -1;
        HashMap<Character, Integer> map = new HashMap<>();
        while (true) {
            //accquire

            while (i < str.length() - 1) {
                f1 = true;
                i++;
                char ch = str.charAt(i);
                map.put(ch, map.getOrDefault(ch, 0) + 1);
                if (map.get(ch) == 1) {
                    break;
                } else {
                    int len = i - 1;
                    if (len > ans) {
                        ans = len;
                    }
                }

            }
            //release
            while (j < i) {
                f2 = true;
                j++;
                char ch = str.charAt(j);
                map.put(ch, map.get(ch) - 1);
                if (map.get(ch) == 1) {
                    break;
                }
                if (f1 == false && f2 == false) {
                    break;
                }
            }
            return ans;
        }


    }

    static int lingest(int[] nums) {
        Set<Integer> hasset = new HashSet<Integer>();
        for (int num : nums
        ) {
            hasset.add(num);

        }
        int lingestStreak = 0;
        for (int num : nums) {
            if (!hasset.contains(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (hasset.contains(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }
                lingestStreak = Math.max(lingestStreak, currentStreak);
            }
        }
        return lingestStreak;

    }

}
