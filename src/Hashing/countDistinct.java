package Hashing;

import java.util.HashSet;

public class countDistinct {
    public static void main(String[] args) {
        int []arr= {1,2,3,5,5,2};
        System.out.println(count(arr));
    }
    static int count(int []arr){
        HashSet<Integer>set = new HashSet<Integer>();
        for (int i = 0; i < arr.length; i++) {
            set.add(arr[i]);
        }
        return set.size();

    }
}
