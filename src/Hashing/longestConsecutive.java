package Hashing;

import java.util.HashSet;
import java.util.Set;

public class longestConsecutive {
    public static void main(String[] args) {

    }
    static int lingest(int[]nums){
        Set<Integer> hasset = new HashSet<Integer>();
        for (int num:nums
             ) {
            hasset.add(num);

        }
        int lingestStreak=0;
        for (int num:nums){
            if (!hasset.contains(num-1)){
                int currentNum= num;
                int currentStreak = 1;

                while (hasset.contains(currentNum+1)){
                    currentNum +=1;
                    currentStreak +=1;
                }
                lingestStreak = Math.max(lingestStreak,currentStreak);
            }
        }
        return lingestStreak;

    }

}
