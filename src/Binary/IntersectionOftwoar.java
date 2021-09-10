package Binary;

import Hashing.intersection;

import java.util.HashSet;

public class IntersectionOftwoar {
    public static void main(String[] args) {

    }

    static int[] intersection(int[] nums1, int[] nums2){
        HashSet<Integer>set =new HashSet<Integer>();
        for (int i:nums1
             ) {
            set.add(i);

        }
        HashSet<Integer>Intersection = new HashSet<Integer>();
        for (int i:nums2
             ) {
            if (set.contains(i)){
                Intersection.add(i);
            }

        }
        int[] result = new int[Intersection.size()];
        int index = 0;
        for (int i:Intersection
             ) {
            result[index++] =i;

        }
        return result;

    }
}