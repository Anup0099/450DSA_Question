package Hashing;

import java.util.HashMap;
import java.util.HashSet;

public class angram {
    public static void main(String[] args) {

    }
    static int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer>set =new HashSet<>();
        for (int i:
                nums1
             ) {
            set.add(i);

        }
        HashSet<Integer>intersection = new HashSet<>();
        for (int i:nums2
             ) {
            if (set.contains(i)){
                intersection.add(i);

        }
    }
        int[]result = new int[intersection.size()];
        int index = 0;
        for (int i:intersection
             ) {
            result[index++]=i;

        }
        return result;
}
}
