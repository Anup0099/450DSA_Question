package string;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class multipl {
    public int findFinalValue(int[] nums, int original) {
        Set<Integer> s = new HashSet<>();
        for (int x:nums
             ) {
            s.add(x);

        }

        while (s.contains(original)){
            original =original*2;
        }
        return  original;


    }
    public static void main(String[] args) {


    }
}
