package string;

import java.util.HashMap;
import java.util.HashSet;

public class jewel {
    public static void main(String[] args) {
        String jewels = "aA", stones = "aAAbbbb";
        System.out.println(numJewelsInStones(jewels, stones));
    }

    static int numJewelsInStones(String jewels, String stones) {

        HashSet<Character>j = new HashSet<Character>();
        for (char c : jewels.toCharArray()){
            j.add(c);

        }
        int count = 0;
        for (Character c : stones.toCharArray()){
            if (j.contains(c)){
                count++;
            }
        }
        return count;


    }

}
